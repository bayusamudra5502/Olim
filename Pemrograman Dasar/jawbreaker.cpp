#include <bits/stdc++.h>
using namespace std;

#define MAX 30
int matriks[MAX][MAX];

int klik(int R, int C, int x);

int main(){
    int R,C;
    scanf("%d %d", &R, &C);

    for(int i = 0; i < R; i++){
        for(int j = 0; j < C; j++){
            scanf("%d",&matriks[i][j]);
        }
    }

    int r,c;
    scanf("%d %d", &r, &c);

    int x = klik(r,c,matriks[r][c]);
    printf("%d\n",x*(x-1));
}

int klik(int R, int C, int x){
    if((matriks[R][C] != x) || ((R < 0) && (C < 0)) 
                || ((R > MAX) && (C > MAX))){
        // Base Case
        return 0;
    }else{
        matriks[R][C] = 0;
        return 1 + klik(R-1,C,x) + klik(R,C-1,x)+
                klik(R+1,C,x)+klik(R,C+1,x);
    }
}