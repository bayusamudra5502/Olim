#include <bits/stdc++.h>
using namespace std;

void cetak(int n){
    for(int i = 0; i < n; i++){
        printf("*");
    }
    printf("\n");
}

void gunung(int x){
    if(x > 0){
        gunung(x-1);
        cetak(x);
        gunung(x-1);
    }
    // Base case : Do not anything.
}

int main(){
    int n;
    scanf("%d", &n);

    gunung(n);
    return 0;
}