#include <bits/stdc++.h>
using namespace std;

int myfloor(float x);
int myceil(float x);

int main(){
    float n;
    scanf("%f", &n);

    // printf("%d %d\n", floor(n), ceil(n)); -- CHEAT! dari header <cmath>
    printf("%d %d\n", myfloor(n), myceil(n));
    return 0;
}

int myfloor(float x){
    int n;
    n = (int) trunc(x);
    
    if(trunc(x) == x){
        return x;
    }else{
        if(x >= 0){
            return n;
        }else{
            return n-1;
        }
    }
}

int myceil(float x){
     int n;
    n = (int) trunc(x);

    if(trunc(x) == x){
        return x;
    }else{
        if(x >= 0){
            return n+1;
        }else{
            return n;
        }
    }
}