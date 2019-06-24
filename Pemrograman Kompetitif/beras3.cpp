#include <bits/stdc++.h>
using namespace std;

struct Beras
{
    double p; // price per Kg
    double w; // Total Weight
    double c; // Total Price
};

int compar(const void *a, const void *b)
{
    if (((Beras *)a)->p == ((Beras *)b)->p)
    {
        return ((Beras *)a)->w - ((Beras *)b)->w;
    }
    else
    {
        return ((Beras *)b)->p - ((Beras *)a)->p;
    }
}

int main()
{
    int n, x;
    Beras db[1005];
    scanf("%d %d", &n, &x);

    for (int i = 0; i < n; i++)
        scanf("%lf", &db[i].w);

    for (int i = 0; i < n; i++)
    {
        scanf("%lf", &db[i].c);
        db[i].p = db[i].c / db[i].w;
    }

    qsort(db, n, sizeof(Beras), compar);

    double total;
    for (int i = 0; i < n; i++)
    {
        if (x > 0)
        {
            if (x >= db[i].w)
            {
                x -= db[i].w;
                total += db[i].c;
            }
            else
            {
                total += db[i].p * x;
                x = 0;
            }
        }
        else
        {
            break;
        }
    }

    printf("%.5f", total);
    return 0;
}