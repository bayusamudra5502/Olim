#include <bits/stdc++.h>
using namespace std;

int diff(char a[], char b[])
{
    int n = 0;
    for (int i = 0; i < (int)strlen(a) && i < (int)strlen(b); i++)
    {
        if (a[i] != b[i])
        {
            n++;
        }
    }

    n += abs((int)strlen(a) - (int)strlen(b));

    return n;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n;
    cin >> t >> n;

    int x[105];
    int h[105];
    int f[105][10005];

    h[0] = 0;
    x[0] = 0;

    for (int i = 1; i <= n; i++)
    {
        char s1[1005], s2[1005];
        cin >> s1 >> s2;
        x[i] = diff(s1, s2);

        cin >> h[i];
    }

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= t; j++)
        {
            if (i == 0 || j == 0)
                f[i][j] = 0;
            else if (x[i] <= j)
            {
                f[i][j] = max(h[i] + f[i - 1][j - x[i]], f[i - 1][j]);
            }
            else
            {
                f[i][j] = f[i - 1][j];
            }
        }
    }

    cout << f[n][t] << endl;
}