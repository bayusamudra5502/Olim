#include <bits/stdc++.h>
using namespace std;

int compar(const void *x, const void *y)
{
    return *((int *)x) - *((int *)y);
}

int main()
{
    int num[100005];
    bool odd = false, even = false;
    int n;

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int tmp;
        scanf("%d", &tmp);

        if (tmp % 2 == 0)
        {
            even |= true;
        }
        else
        {
            odd |= true;
        }

        num[i] = tmp;
    }

    if (odd && even)
    {
        qsort(num, n, sizeof(int), compar);
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d", num[i]);
        if (i == n - 1)
        {
            printf("\n");
        }
        else
        {
            printf(" ");
        }
    }
}