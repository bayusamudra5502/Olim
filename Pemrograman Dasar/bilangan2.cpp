#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    scanf("%d", &n);

    if(n < 10){
        printf("satuan");
    }else if(n < 100){
        printf("puluhan");
    }else if(n < 1000){
        printf("ratusan");
    }else if(n < 10000){
        printf("ribuan");
    }else if(n < 100000){
        printf("puluhribuan");
    }

    printf("\n");

    return 0;
}