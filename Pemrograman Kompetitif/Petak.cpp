#include <bits/stdc++.h>
using namespace std;

const int MAX = 110;
int mat[MAX][MAX];

int main(){
    int k,b,n;
    scanf("%d %d %d", &b, &k, &n);

    for(int i=0; i < MAX; i++){
        for(int j = 0; j < MAX; j++){
            mat[i][j] = 1;
        }
    }

    for(int i=1; i <= b; i++){
        for(int j = 1; j <= k; j++){
            scanf("%d", &mat[i][j]);
        }
    }

    int bn=1000, kn=1000;
    for(int i=1; i <= b; i++){
        for(int j = 1; j <= k; j++){
            int menarik = mat[i-1][j];
            menarik *= mat[i+1][j];
            menarik *= mat[i][j+1];
            menarik *= mat[i][j-1];

            if(menarik == n){
                if(kn == j){
                    if(bn > i){
                        kn = j;
                        bn = i;    
                    }
                }else if(kn > j){
                    kn = j;
                    bn = i;
                }
            }
        }
    }

    bn = (bn == 1000)? 0 : bn;
    kn = (kn == 1000)? 0 : kn;

    printf("%d %d\n", bn, kn);
    return 0;
}