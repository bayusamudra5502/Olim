#include <bits/stdc++.h>
using namespace std;

// Bismillah..
//
// Program Runtuh (OSN 2006)
// Link : https://training.ia-toki.org/training/curriculums/1/courses/11/chapters/50/problems/223/

char matriks[25][10];
int R,C;
void swap(int &a, int &b);
bool runtuh();

int main(){
    scanf("%d %d", &R, &C);
    for(int i = 0; i < R; i++){
            scanf("%s", matriks[i]);
    }

    while(runtuh());

    for(int i = 0; i < R; i++){
        for(int j = 0; j < C; j++){
            printf("%C", matriks[i][j]);

            if(j >= C-1){
                printf("\n");
            }
        }
    }
    return 0;
}

void swap(int &a, int &b){
    int tmp = a;
    a = b;
    b = tmp;
}

bool runtuh(){
    bool hasil = false;
    int max = 0; // Indeks maksimum
    for(int i = 0; i < R; i++){
        bool runtuhkan = true;
        for(int j = 0; j < C; j++){
            if(matriks[i][j] == '0'){
                runtuhkan = false;
                break; // Time Saving
            }
        }

        if(runtuhkan){
            for(int j = 0; j < C; j++){
                matriks[i][j] = '0';
                hasil = true;
                max = i;
            }
        }
    }

    // Turunkan
   for(int j = 0; j < C; j++){
        for(int k = 0; k < R-1; k++){ // Mengadopsi Bubble Sort
            for(int i = k; i < R-1; i++){
                if((matriks[i+1][j] == '1') && !(i < max) ){
                    break;
                }else{
                    swap(matriks[i][j],matriks[i+1][j]);
                }
            }
        }

    }

    return hasil;
}