#include <bits/stdc++.h>
using namespace std;

// Pendataan Berat Bebek
// Status : ACCEPTED
// Link : https://training.ia-toki.org/training/curriculums/1/courses/11/chapters/62/problems/291/

int main()
{
    int n, q;
    scanf("%d", &n);

    int arr[100000];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    scanf("%d", &q);
    for (int i = 0; i < q; i++)
    {
        int low, up;
        scanf("%d %d", &low, &up);

        int lr = n, rr = -1;

        int L, R;

        // Lower Bound
        L = 0;
        R = n - 1;
        while (L <= R)
        {
            int mid = (L + R) / 2;

            if (arr[mid] > low)
            {
                lr = mid;
                R = mid - 1;
            }
            else
            {
                L = mid + 1;
            }
        }

        // Upper Bound
        L = 0;
        R = n - 1;
        while (L <= R)
        {
            int mid = (L + R) / 2;

            if (arr[mid] > up)
            {
                R = mid - 1;
            }
            else
            {
                rr = mid;
                L = mid + 1;
            }
        }

        printf("%d\n", rr - lr + 1);
    }
    return 0;
}