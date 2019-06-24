#include <bits/stdc++.h>
using namespace std;

/*
    Status : Accepted
    LINK : https://training.ia-toki.org/problemsets/166/problems/969/
 */

int main()
{
    int N, X, Y;
    scanf("%d %d %d", &N, &X, &Y);

    int tmp = (N + X + Y) / 2;
    for (int A = 0; A <= tmp; A++)
    {
        int B = tmp - A;
        int C = A - Y;
        int D = B - X;

        // Pake Pengaman : A+B+C+D = N
        if (B >= 0 && C >= 0 && D >= 0 && (A + B + C + D) == N)
        {
            printf("%d %d %d %d\n", A, B, C, D);
            return 0;
        }
    }

    printf("-1\n");

    return 0;
}
