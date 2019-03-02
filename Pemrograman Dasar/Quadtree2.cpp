#include <bits/stdc++.h>
using namespace std;

// Bismillah...
//
// Quadtree - Encode
// Link : https://training.ia-toki.org/training/curriculums/1/courses/1/chapters/18/problems/76/
// Status : Accepted

// Pendefinisian
#define MAX 130
int s = 0;
int ndata = 0;
// vector<char*> db;
char db[MAX*MAX][10];
int R,C;

// Fungsi
int gambar[MAX][MAX];
void isi();
void print();
void decode(int aR, int aC, int bR, int bC, char* str);

int main(){
    memset(gambar,0,sizeof(int) * MAX * MAX);
    isi();
    
    int ukuran = 1 << (s-1);
    
    int besar = R > C ? R : C;
    ukuran = ukuran > besar ? ukuran : besar;

    for(int i=0; i < (int) ndata; i++){ // Ngegaya pake iterator..
        char* tmp = db[i] + 1;
        decode(0,0,ukuran-1,ukuran-1,tmp);
    }

    print();
    return 0;
}

void print(){ // INPUT BUKAN INDEKS
    for(int i = 0; i < R; i++){
        for(int j = 0; j < C ; j++){
            printf("%d", gambar[i][j]);

            if(j < C-1){
                printf(" ");
            }else{
                printf("\n");
            }
        }
    }
}

void tomax(int &A, int B){
    if(B > A){
        A = B;
    }
}

void isi(){
    int n;
    char tmp[10];
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        ndata++;
        scanf("%s", tmp);
        tomax(s, strlen(tmp));
        strcpy(db[i], tmp);
    }

    scanf("%d %d", &R, &C);
}

void decode(int aR, int aC, int bR, int bC, char* str){ // INPUT BERUPA INDEKS
    if(str[0] == '\0'){
        // printf("%d %d %d %d\n", aR, aC, bR, bC);
        for(int i = aR; i <= bR; i++){
            for(int j = aC; j <= bC; j++){
                gambar[i][j] = 1;
            }
        }
    }else{
        int batasR, batasC;
        batasR = (bR+aR+1)/2;
        batasC = (bC+aC+1)/2;
        
        // Pilih Kuadran
        switch(str[0]){
            case '0':
                // Kuadran 1
                decode(aR, aC, batasR-1, batasC-1, str + 1);
                break;
            case '1':
                // Kuadran 2
                decode(aR, batasC, batasR-1, bC, str + 1);
                break;
            case '2':
                // Kuadran 3
                decode(batasR, aC, bR, batasC-1, str + 1);
                break;
            case '3':
                // Kuadran 4
                decode(batasR, batasC, bR, bC, str + 1);
                break;
        }
    }
}