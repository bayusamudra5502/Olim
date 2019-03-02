#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    scanf("%d",&n);

    if(n > 0){
        printf("positif");
    }else if(n == 0){
        printf("nol");
    }else{
        printf("negatif");
    }

    printf("\n");
    return 0;
}