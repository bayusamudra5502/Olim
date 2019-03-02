#include <bits/stdc++.h>
using namespace std;

void tukar(int &x, int &y);

/*
    Perhatikan semua kemungkinan yang mungkin!
*/

int main(){
    int n;
    int A[1005];
    int B[1005];

    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &A[i]);
    }

    for(int i = 0; i < n; i++){
        scanf("%d", &B[i]);
    }

    int q;
    scanf("%d", &q);

    for(int i = 0; i < q; i++){
        char P[2],Q[2];
        int x = 0 ,y = 0;
        scanf("%s %d %s %d", P, &x, Q, &y);

        if(strcmp(P,"A") == 0 && strcmp(Q,"B") == 0){
            tukar(A[x-1], B[y-1]);
        }else if(strcmp(P,"B") == 0 && strcmp(Q,"A") == 0){
            tukar(B[x-1], A[y-1]);
        }else if(strcmp(P,"A") == 0 && strcmp(Q,"A") == 0){
            tukar(A[x-1], A[y-1]);
        }else{
            tukar(B[x-1], B[y-1]);
        }
    }

    for(int i = 0; i < n; i++){
        printf("%d", A[i]);
        if(i < n-1){
            printf(" ");
        }else{
            printf("\n");
        }
    }

    for(int i = 0; i < n; i++){
        printf("%d", B[i]);
        if(i < n-1){
            printf(" ");
        }else{
            printf("\n");
        }
    }

    return 0;
}

void tukar(int &x, int &y){
    int tmp;
    tmp = x;
    x = y;
    y = tmp;
}