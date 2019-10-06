#include <bits/stdc++.h>
using namespace std;

/**
 * STATUS : AC
 *  LINK : https://codeforces.com/problemset/problem/1234/C
 **/
bool db[2][300000];

bool check(int R, int L)
{
    if (L == -1 && R == 0)
    {
        return true;
    }
    else if (L == -1 || R == -1)
    {
        return false;
    }
    else
    {
        if (db[R][L] == 1)
        {
            if (R == 0 && db[1][L] == 1)
            {
                return check(1, L - 1);
            }
            else if (R == 1 && db[0][L] == 1)
            {
                return check(0, L - 1);
            }
            else
            {
                return false;
            }
        }
        else
        {
            return check(R, L - 1);
        }
    }
}

void insert(int l)
{
    for (int j = 0; j < 2; j++)
    {
        for (int i = 0; i < l; i++)
        {
            char tmp;
            cin >> tmp;
            switch (tmp)
            {
            case '1':
            case '2':
                db[j][i] = 0;
                break;
            default:
                db[j][i] = 1;
                break;
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int q;
    cin >> q;

    for (int i = 0; i < q; i++)
    {
        int l;
        cin >> l;
        insert(l);
        cout << (check(1, l - 1) ? "YES" : "NO") << endl;
    }

    return 0;
}