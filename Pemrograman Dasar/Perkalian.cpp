#include <bits/stdc++.h>
using namespace std;

int A[100][100], B[100][100], C[100][100];
void kali(int n, int m, int p);

int main(){
    //INSIALISASI
    int n,m,p;
    scanf("%d %d %d", &n, &m, &p);

    for(int i=0; i < n; i++){
        for(int j=0; j < m; j++){
            C[i][j] = 0;
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            scanf("%d", &A[i][j]);
        }
    }

    for(int i = 0; i < m; i++){
        for(int j = 0; j < p; j++){
            scanf("%d", &B[i][j]);
        }
    }

    kali(n,m,p);

    for(int i = 0; i < n; i++){
        for(int j = 0; j < p; j++){
            printf("%d", C[i][j]);
            if(j < p-1){
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}

void kali(int n, int m, int p){
    for(int i=0; i < n; i++){
        for(int j=0; j < p; j++){
            for(int k=0; k < m; k++){
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}