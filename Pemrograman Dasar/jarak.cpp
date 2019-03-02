#include <bits/stdc++.h>
using namespace std;

int main(){
    // JARAK M0ANHATTAN
    struct TITIK{
        int x;
        int y;
    } a, b;

    scanf("%d %d", &a.x, &a.y);
    scanf("%d %d", &b.x, &b.y);

    int jarak;    
    jarak = (int) (abs(a.x - b.x) + abs(a.y-b.y));

    printf("%d\n", jarak);
    return 0;
}