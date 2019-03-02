#include <bits/stdc++.h>
using namespace std;

int f(int A, int B, int x);

int main(){
    int a,b,k,x;
    scanf("%d %d %d %d", &a, &b , &k, &x);

    for(int i = 0; i < k; i++){
        x = f(a,b,x);
    }

    printf("%d\n", x);
    return 0;
}

int f(int A, int B, int x){
    return ((int) abs(A*x + B));
}