#include <bits/stdc++.h>
using namespace std;

// Ini fungsi sebenernya mirip kayak strchr tapi
// Huruf/karakter yg dicari bisa lebih dari satu
// (KELUARGA strstr, strchr, strpbrk)

int main(){
    char cari[] = "aiueo";
    char teks[] = "Emam daging mundIng make sayur kol";

    char* ptr;
    ptr = strpbrk(teks, cari);

    for(int i = 1; ptr != NULL; i++){
        printf("[%d] : %s\n",i,ptr);
        ptr = strpbrk(ptr+1, cari);
    }
}