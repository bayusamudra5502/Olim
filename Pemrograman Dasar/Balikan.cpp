#include <bits/stdc++.h>
using namespace std;

int balikan(int x);

int main(){
    int a,b;
    scanf("%d %d", &a, &b);
    printf("%d\n", balikan(balikan(a)+balikan(b)));
    return 0;
}

int balikan(int x){
    int hasil = 0;

    while(x > 0){
        hasil = hasil * 10 + x % 10;
        x /= 10;
    }

    return hasil;
}