#include <bits/stdc++.h>
using namespace std;

char matriks[25][10];
bool hapus();
int R,C;
void runtuh();
void isi();
void cetak();
int maximum = -1;

int main(){
    for(int i = 0; i < 25; i++){
        for(int j = 0; j < 10; j++){
            matriks[i][j] = '0';
        }
    }

    isi();
    runtuh();
    cetak();
    return 0;
}

void isi(){
    scanf("%d %d", &R, &C);
    for(int i = 0; i < R; i++){
        scanf("%s",matriks[i]);
    }
}

void cetak(){
    for(int i = 0; i < R; i++){
        printf("%s\n",matriks[i]);
    }
}

bool hapus(){
    bool hasil = false;
    for(int i = 0; i < R; i++){
        bool hapuskan = true;
        for(int j = 0; j < C; j++){
            if(matriks[i][j] == '0'){
                hapuskan = false;
            }
        }

        if(hapuskan){
            hasil = true;
            maximum = i;
            for(int j = 0; j< C; j++){
                matriks[i][j] = '0';
            }
        }
    }

    return hasil;
}

void runtuh(){
    if(hapus()){
        for(int j=0; j < C; j++){
            for(int i=maximum; i >= 0; i--){
               if(matriks[i][j] == '1'){
                   int tmp = i;
                   while(matriks[tmp+1][j] != '1' && tmp < R-1){
                       swap(matriks[tmp+1][j],matriks[tmp][j]);
                       tmp++;
                   }
               }
            }
        }

        runtuh();
    }
}