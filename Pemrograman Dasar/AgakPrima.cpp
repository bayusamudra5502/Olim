#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        int x, f = 0;
        scanf("%d", &x);

        for(int j = 1; j <= x; j++){
            if(x % j == 0){
                f++;
            }
            if(f > 4)
                break; //BIAR GA TLE :v
        }

        if(f > 4){
            printf("BUKAN\n");
        }else{
            printf("YA\n");
        }
    }

    return 0;
}