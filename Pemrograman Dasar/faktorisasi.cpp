#include <bits/stdc++.h>
using namespace std;

#define MAX 1010

void faktorisasi(int x);

int main(){
    int n;
    scanf("%d", &n);

    faktorisasi(n);
    return 0;
}


int mylog(int &x, int e){
    int i = 0;

    while(x % e == 0){
        i++;
        x /= e;
    }

    return i;
}

void faktorisasi(int x){
    if(x < 2){
        printf("%d\n",x);
    }else{
        for(int i=2; x > 1;(i==2)? i++ : i+=2){
            int e = mylog(x,i);
            if(e != 0){
                if(e != 1){
                    printf("%d^%d",i,e);
                }else{
                    printf("%d", i);
                }

                if(x > 1){
                    printf(" x ");
                }else{
                    printf("\n");
                }
            }
        }
    }
}
