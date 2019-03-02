#include <bits/stdc++.h>
using namespace std;

// Kena RTE... Dan WA :'
// Owalah INPUTNYA!!!!!

int x,A,B;
int f(int K){
    if(K <= 1){
        return abs(A*x+B);
    }else{
        return abs(A*f(K-1)+B);
    }
}

int main(){
    int K;
    scanf("%d %d %d %d", &A, &B, &K, &x);
    printf("%d\n",f(K));
    return 0;
}