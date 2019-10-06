#include <bits/stdc++.h>
using namespace std;

// BASIS 1
int a[100][100], b[100][100];
int R, C;

bool identik()
{
    for (int i = 1; i <= R; i++)
    {
        for (int j = 1; j <= C; j++)
        {
            if (a[i][j] != b[i][j])
            {
                return false;
            }
        }
    }

    return true;
}

bool horizontal()
{
    for (int i = 1; i <= R; i++)
    {
        for (int j = 1; j <= C; j++)
        {
            if (a[i][j] != b[R + 1 - i][j])
            {
                return false;
            }
        }
    }

    return true;
}

bool vertikal()
{
    for (int i = 1; i <= R; i++)
    {
        for (int j = 1; j <= C; j++)
        {
            if (a[i][j] != b[i][C - j + 1])
            {
                return false;
            }
        }
    }

    return true;
}

bool v_kanan()
{
    for (int i = 1; i <= R; i++)
    {
        for (int j = 1; j <= C; j++)
        {
            if (a[i][j] != b[j][i])
            {
                return false;
            }
        }
    }

    return true;
}

bool v_kiri()
{
    for (int i = 1; i <= R; i++)
    {
        for (int j = 1; j <= C; j++)
        {
            if (a[i][j] != b[R - j + 1][C - i + 1])
            {
                return false;
            }
        }
    }

    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> R >> C;
    for (int i = 1; i <= R; i++)
        for (int j = 1; j <= C; j++)
            cin >> a[i][j];

    cin >> R >> C;
    for (int i = 1; i <= R; i++)
        for (int j = 1; j <= C; j++)
            cin >> b[i][j];

    if (identik())
    {
        cout << "identik";
        ;
    }
    else if (horizontal())
    {
        cout << "horisontal";
    }
    else if (vertikal())
    {
        cout << "vertikal";
    }
    else if (v_kiri())
    {
        cout << "diagonal kiri bawah";
    }
    else if (v_kanan())
    {
        cout << "diagonal kanan bawah";
    }
    else
    {
        cout << "tidak identik";
    }

    cout << endl;

    return 0;
}