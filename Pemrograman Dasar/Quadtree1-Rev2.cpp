#include <bits/stdc++.h>
using namespace std;

// Bismillah...
// Quadtree I : Pengkodean
// 
// Url : https://training.ia-toki.org/training/curriculums/1/courses/1/chapters/18/problems/75/
// STATUS : Accepted (AC)

// Konstanta
#define MAX 135

// Pendefinisian
int gambar[MAX][MAX];
// vector<char*> hasil;
char hasil[MAX*MAX][10];
int size = 0;

void isi(); // v
int checkhomogen(int aR, int aC, int bR, int bC); // v
void encode(int aR, int aC, int bR, int bC, char *lokasi);
char* genlokasi(char* lokasi, char* tambahan);  // v
int ukuranR, ukuranC;

int main(){
    memset(gambar,-1, MAX*MAX *sizeof(int)); // Inisialisasi
    isi();

    char *tmp = (char*) "";

    encode(0,0,ukuranR, ukuranC, tmp);

    // printf("%d\n", (int) hasil.size());
    // for(int i = 0; i < (int) hasil.size(); i++){
    //    printf("1%s\n", hasil[i]);
    // }

    printf("%d\n", size);
    for(int i = 0; i < size; i++){
       printf("1%s\n", hasil[i]);
    }

    return 0;
}

void encode(int aR, int aC, int bR, int bC, char* lokasi){ // Input berupa indeks
    int data = checkhomogen(aR, aC, bR, bC);
    if(data != -1){
        // Base Case
        // If data = 0 don't save

        if(data == 1){
            // hasil.push_back(lokasi);
            strcpy(hasil[size], lokasi);
            size++;
        }

    }else{
        // Rekruens
        int batasC, batasR;
        batasC = (int) ((bC-aC) + 1)/2 + aC; // C
        batasR = (int) ((bR-aR) + 1)/2 + aR; // R

        // Operasi KD. 1
        encode(aR, aC, batasR-1, batasC-1, genlokasi(lokasi, (char*) "0"));

        // Operasi KD. 2
        encode(aR, batasC, batasR-1, bC, genlokasi(lokasi, (char*) "1"));

        // Operasi KD. 3
        encode(batasR, aC, bR, batasC-1, genlokasi(lokasi, (char*) "2"));

        // Operasi KD.4
        encode(batasR, batasC, bR, bC, genlokasi(lokasi, (char*) "3"));
    }
}


char* genlokasi(char* lokasi, char* tambahan){
    char *hasil;
    hasil = (char*) malloc(10*sizeof(char));
    
    strcat(hasil, lokasi);
    strcat(hasil, tambahan);
    
    return hasil;
}

void isi(){
    int R,C;
    scanf("%d %d", &R, &C);

    int r = 1 << (int) ceil(log2(R));
    int c = 1 << (int) ceil(log2(C));

    if(r > c){
        c = r;
    } else if(c > r){
        r = c;
    }

    // Inisialisasi
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            gambar[i][j] = 0;
        }
    }

    // Input
    for(int i=0; i<R; i++){
        for(int j=0; j<C; j++){
            scanf("%d", &gambar[i][j]);
        }
    }

    ukuranR = r - 1; // Indeks
    ukuranC = c - 1;
}

int checkhomogen(int aR, int aC, int bR, int bC){ // Periksa Homogen gak?
    int cmp = gambar[aR][aC];
    for(int i = aR; i <= bR; i++){
        for(int j = aC; j <= bC; j++){
            if(gambar[i][j] != cmp){
                return -1;
            }
        }
    }

    /* 
        OUTPUT : Klo homogen, keluarin homogen berapa
        klo ga homogen, keluarin -1
    */
    return cmp;    
}