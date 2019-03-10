#include <bits/stdc++.h>
using namespace std;

// AC tapi Lemot !
// https://brilliant.org/problems/life-and-death-in-the-desert/ (yg kedua tapi deng)

int w[] = {240,135,2800,410,182};
int v[] = {400,400,1500,410,190};
int c[] = {900,650,5000,950,95};

int f(int massa, int volume){
    if(massa < 135 || volume < 400){
        return 0;
    }else{
        int max = -1;

        
        for(int i = 0; i < 5 ; i++){
            int m = massa-w[i];
            int n = volume-v[i];
        
            if(m >= 0 && n >= 0){
                int data = f(m,n) + c[i];
                if(max < data){
                    max = data;
                }     
            }
        }

        return max;
    }
}

int main(){
    printf("%d\n", f(9500,5500));
}