#include <bits/stdc++.h>
using namespace std;

int main(){
    /*  TRANSPOSE MATRIKS
        Format transpose matriks:
        a d g
        b e h
        c f i
    */
    
    int a, b, c;
    int d, e, f;
    int g, h, i;

    scanf("%d %d %d\n%d %d %d\n%d %d %d", &a, &d, &g, &b, &e, &h, &c, &f, &i);
    printf("%d %d %d\n%d %d %d\n%d %d %d\n", a, b, c, d, e, f, g, h, i);
    return 0;
}