#include <string>
#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;

int main(){
    string A = "Gimana Nich... Ubah Acu ke C-style String";
    char* tujuan;

    tujuan = (char*) malloc(100 * sizeof(char));
    
    A.copy(tujuan, A.size()); // Tujuan harus ada
    tujuan[A.size()] = '\0'; // Ga otomatis namba NULL Char (Awass)..
    printf("%s\n", tujuan);
    return 0;
}