#include <bits/stdc++.h>
using namespace std;

/*
    Kanggaro Problem 
    Status : Accepted

    Link : https://www.hackerrank.com/challenges/kangaroo/problem
 */
string kangaroo(int x1, int v1, int x2, int v2)
{
    if (v1 == v2)
    {
        if (x1 == x2)
            return "YES";
        else
            return "NO";
    }
    else
    {
        int bagi = (x1 - x2) / (v2 - v1);
        int sisa = (x1 - x2) % (v2 - v1);

        if (bagi > 0 && sisa == 0)
        {
            return "YES";
        }
        else
        {
            return "NO";
        }
    }
}

int main()
{
    iostream::sync_with_stdio(false); // Mempercepat
    int x1, v1, x2, v2;
    cin >> x1 >> v1 >> x2 >> v2;

    cout << kangaroo(x1, v1, x2, v2);

    return 0;
}