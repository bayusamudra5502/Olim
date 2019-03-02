#include <bits/stdc++.h>
using namespace std;

// Bismillah...
// Quadtree I : Pengkodean
// 
// Url : https://training.ia-toki.org/training/curriculums/1/courses/1/chapters/18/problems/75/

// Konstanta
#define MAX 135

// Pendefinisian
typedef struct{
    int R; // R
    int C; // C
} TITIK;

int gambar[MAX][MAX];
vector<char*> hasil;
TITIK ukuran;

void isi();
int checkhomogen(TITIK a, TITIK b);
void encode(TITIK a, TITIK b, char *lokasi);
char* genlokasi(char* lokasi, char* tambahan);

int main(){
    memset(gambar,-1, MAX*MAX *sizeof(int)); // Inisialisasi
    isi();

    char *tmp = (char*) "";
    TITIK awal;
    awal.R = 0; awal.C = 0;

    encode(awal,ukuran, tmp);

    printf("%d\n", (int) hasil.size());
    for(int i = 0; i < (int) hasil.size(); i++){
        printf("%s\n", hasil[i]);
    }
    return 0;
}

char* genlokasi(char* lokasi, char* tambahan){
    char *hasil;
    hasil = (char*) malloc(105*sizeof(char));
    
    strcat(hasil, lokasi);
    strcat(hasil, tambahan);
    
    return hasil;
}

void encode(TITIK a, TITIK b, char* lokasi){ // Input berupa indeks
    int data = checkhomogen(a,b);
    if(data != -1){
        // Base Case
        // If data = 0 don't save

        if(data == 1){
            char tmp[100] = "1";
            strcat(tmp,lokasi);
            hasil.push_back(tmp);
        }

    }else{
        // Rekruens (Something's went wrong in this section)
        int batasx, batasy;
        batasx = (int) ((b.C-a.C) + 1)/2 + a.C;
        batasy = (int) ((b.R-a.R) + 1)/2 + a.R;

        TITIK loc2,loc3,loc4,loc5,loc6;
        loc2.R = batasy - 1;
        loc2.C = batasx - 1;

        loc3.C = batasx;
        loc3.R = a.R;

        loc4.C = b.C;
        loc4.R = batasy - 1;

        loc5.C = a.C;
        loc5.R = batasy;

        loc6.C = batasx - 1;
        loc6.R = b.R;
        
        printf("%d %d\n%d %d\n%d %d\n%d %d\n%d %d\n%d %d\n%d %d\n\n",
            a.R,a.C,loc2.R,loc2.C,loc3.R,loc3.C,loc4.R,loc4.C,loc5.R,loc5.C,loc6.R,loc6.C,b.R,b.C); // Check 
        // Operasi KD. 1
        encode(a,loc2, genlokasi(lokasi, (char*) "0"));

        // Operasi KD. 2
         encode(loc3,loc4, genlokasi(lokasi, (char*) "1"));

        // Operasi KD. 3
        encode(loc5,loc6, genlokasi(lokasi, (char*) "2"));

        // Operasi KD.4
        encode(loc2,b, genlokasi(lokasi, (char*) "3"));
    }
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
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            scanf("%d", &gambar[i][j]);
        }
    }

    ukuran.R = r - 1; // Indeks
    ukuran.C = c - 1;
}

int checkhomogen(TITIK a, TITIK b){ // Input harus berupa indeks
    int cmp = gambar[a.R][a.C];
    for(int i = a.R; i <= b.R; i++){
        for(int j = a.C; j <= b.C; j++){
            if(gambar[i][j] != cmp){
                return -1;
            }
        }
    }

    return cmp;
}