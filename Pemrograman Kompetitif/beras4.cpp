#include <bits/stdc++.h>
using namespace std;

struct Beras
{
    int w;
    int h;
};

bool compar(Beras a, Beras b)
{
    double pa = (double)a.h / a.w;
    double pb = (double)b.h / b.w;

    return pa > pb;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Beras db[1005];
    int n, x;

    cin >> n >> x;
    for (int i = 0; i < n; i++)
    {
        cin >> db[i].w;
    }

    for (int i = 0; i < n; i++)
    {
        cin >> db[i].h;
    }

    sort(db, db + n, compar);

    double total;
    for (int i = 0; i < n; i++)
    {
        if (db[i].w > x)
        {
            total += (double)db[i].h * (double)x / (double)db[i].w;
            break;
        }
        else
        {
            total += (double)db[i].h;
            x -= db[i].w;
        }
    }
    cout << setprecision(5) << fixed;
    cout << total << endl;
    return 0;
}