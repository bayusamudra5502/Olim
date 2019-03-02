#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    scanf("%d", &n);

    int tmp = 0;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            printf("%d",tmp);
            tmp = (tmp + 1) % 10;
        }
        printf("\n");
    }
    return 0;
}