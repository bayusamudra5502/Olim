#include <bits/stdc++.h>
using namespace std;

int price[100005];
int comp(const void *a, const void *b)
{
    return *((int *)a) - *((int *)b);
}

int main()
{
    int n, q;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &price[i]);
    }

    scanf("%d", &q);
    qsort(price, n, sizeof(int), comp);
    for (int i = 0; i < q; i++)
    {
        int que, cnt = -1;
        scanf("%d", &que);

        int L = 0, R = n - 1;
        while (L <= R)
        {
            int mid = (L + R) / 2;

            if (price[mid] > que)
            {
                R = mid - 1;
            }
            else
            {
                cnt = mid;
                L = mid + 1;
            }
        }

        printf("%d\n", cnt + 1);
    }
    return 0;
}
