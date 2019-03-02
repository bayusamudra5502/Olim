#include <bits/stdc++.h>
using namespace std;

int fibbonaci(int x){ // O(2^n)
    if(x < 1){
        return 0;
    }else if(x == 1){
        return 1;
    }else{
        return fibbonaci(x-1) + fibbonaci(x-2);
    }
}

int Fibbonaci(int x){ // O(n)
    int a = 0, b = 1;
    for(int i = 0; i < x; i++){
        if(i % 2 == 0){
            a = a + b;
        }else{
            b = a + b;
        }
    }

    if((x-1) % 2 == 0){
        return b;
    }else{
        return a;
    }
}

int main(){
    printf("%d %d", fibbonaci(11), Fibbonaci(11));
    return 0;
}