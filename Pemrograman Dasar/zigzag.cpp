#include <bits/stdc++.h>
using namespace std;

// Permutasi Ngalilieur...
//
// Problem : https://training.ia-toki.org/training/curriculums/1/courses/1/chapters/18/problems/73/

int n;
const char karakter[] = "123456789";
bool sudah[9];
char tmp[15];

void kiri(int k,int L);
void kanan(int k, int R);
void cetak();

int main(){
    scanf("%d", &n);
    cetak();
    return 0;
}

void kiri(int k, int L){ // Bakal naikin permutasi
    if(k > 0){
        for(int i = L; i < n; i++){
            if(!sudah[i]){
                tmp[n-k] = karakter[i];
                sudah[i] = true;

                kanan(k-1, i-1);
                sudah[i] = false;
            }
        }
    }else{
        for(int i = 0; i < n; i++){
            printf("%C", tmp[i]);
        }
        printf("\n");
    }
}

void kanan(int k, int R){ // Bakal nurunin permutasi
    if(k > 0){
        for(int i = 0; i <= R; i++){
            if(!sudah[i]){
                tmp[n-k] = karakter[i];
                sudah[i] = true;

                kiri(k-1,i+1);
                sudah[i] = false;
            }
        }
    }else{
        for(int i = 0; i < n; i++){
            printf("%C", tmp[i]);
        }
        printf("\n");
    }
}


void cetak(){ // Fungsi awal
    int k = n;
    for(int i = 0; i < k;i++){
        tmp[n-k] = karakter[i];
        sudah[i] = true;

        if(i == 0){
            kiri(k-1,i+1);
        }else if(i == n){
            kanan(k-1,i-1);
        }else{
            //kiri(k-1,i+1);
            kanan(k-1,i-1);
            kiri(k-1,i+1);
        }

        sudah[i] = false;
    }
}