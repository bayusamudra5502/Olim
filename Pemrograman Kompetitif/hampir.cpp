#include <bits/stdc++.h>
using namespace std;

int p = 0;
int prime[500];
bool table[1005];

void sieve()
{
    for (int i = 0; i < 1005; i++)
    {
        table[i] = 1;
    }

    table[0] = table[1] = 0;
    for (int i = 2; i <= sqrt(1000); i++)
    {
        if (table[i])
            for (int j = i * i; j < 1005; j += i)
            {
                table[j] = 0;
            }
    }

    for (int i = 0; i < 1005; i++)
    {
        if (table[i])
        {
            prime[p] = i;
            p++;
        }
    }
}

bool hampir(int n)
{
    int x = 0;
    for (int i = 0; i < p && n > 1; i++)
    {
        while (n % prime[i] == 0)
        {
            x++;
            n /= prime[i];
        }
    }

    return (x == 2);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    sieve();
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int a, b;
        cin >> a >> b;

        int n = 0;
        for (int i = a; i <= b; i++)
        {
            if (hampir(i))
            {
                n++;
            }
        }

        cout << n << endl;
    }
    return 0;
}