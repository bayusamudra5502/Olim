#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        int p;
        bool prima = true;
        scanf("%d", &p);

        for(int j = 2; j <= (int) trunc(sqrt(p));j++){
            if(p % j == 0){
                prima = false;
                break;
            }
        }

        if(prima && p > 1){
            printf("YA");
        }else{
            printf("BUKAN");
        }

        printf("\n");
    }

    return 0;
}