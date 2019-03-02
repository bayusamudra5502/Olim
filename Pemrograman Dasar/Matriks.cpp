#include <bits/stdc++.h>
using namespace std;

int mat[100][100];
int putar[100][100];
void puter(int m, int n);

int main(){
    int m,n;

    scanf("%d %d", &m, &n);
    for(int i=0; i < m; i++){
        for(int j=0; j < n;j++){
            scanf("%d", &mat[i][j]);
        }
    }

    puter(m,n);

    for(int i=0; i < n; i++){
        for(int j=0; j<m; j++){
            printf("%d", putar[i][j]);
            if(j < m-1){
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}

void puter(int m, int n){
    for(int i = 0; i < m; i++){ //Baris
        for(int j = 0; j < n; j++){ //Kolom
            putar[j][m-1-i] = mat[i][j];
        }
    }
}