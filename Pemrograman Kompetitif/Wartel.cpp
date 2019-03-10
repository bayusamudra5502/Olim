#include <bits/stdc++.h>
using namespace std;

// WARTEL
//
// Link : https://training.ia-toki.org/training/curriculums/1/courses/11/chapters/62/problems/291/

struct telepon{
    char nama[20];
    char telepon[20];
} buku[100010];

int cari(int L, int R, char nama[20]){
    if(L > R){
        return -1;
    }

    int tengah = (L+R)/2;

    if(strcmp(buku[tengah].nama, nama) == 0){
        return tengah;
    }else if(strcmp(buku[tengah].nama, nama) < 0){
        return cari(tengah+1,R, nama);
    }else{
        return cari(L,tengah-1, nama);
    }
}

int main(){
    int N, Q;
    scanf("%d %d", &N, &Q);

    for(int i = 0; i < N; i++){
        scanf("%s %s", buku[i].nama, buku[i].telepon);
    }

    for(int i = 0; i < Q; i++){
        char find[20];
        scanf("%s", find);

        int hasil = cari(0,N-1, find);

        printf("%s\n", (hasil >= 0)?buku[hasil].telepon:"NIHIL");
    }

    return 0;
}