#include <bits/stdc++.h>
using namespace std;

int main(){
    unsigned int n;
    scanf("%d", &n);

    while((n & 1) != 1){
        n >>= 1;
    }

    if(n == 1){
        printf("ya");
    }else{
        printf("bukan");
    }

    printf("\n");
    return 0;
}