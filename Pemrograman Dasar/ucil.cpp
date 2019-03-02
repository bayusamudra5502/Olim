#include <bits/stdc++.h>
using namespace std;

int N(int x){
    if(x == 1){
        return 1;
    }else if(x % 2 == 0){
        return (x/2) * N(x-1);
    } else {
        return x * N(x-1);
    }
}

int main(){
    int n;
    scanf("%d", &n);
    printf("%d\n", N(n));
    return 0;
}