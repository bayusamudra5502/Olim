#include <bits/stdc++.h>
using namespace std;

int substract(int n){
    if(n % 10 == 0){
        return ((int) (n/10));
    }else{
        return n-1;
    }
}

int main(){
    int x,n;
    scanf("%d %d", &x, &n);

    for(int i = 0; i <n ; i++){
        x = substract(x);
    }

    printf("%d\n", x);

    return 0;
}