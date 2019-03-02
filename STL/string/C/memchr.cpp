#include <bits/stdc++.h>
using namespace std;

typedef struct{
    char nama[50];
    char kelas[50];
    } IDENTITAS;

int main(){
    IDENTITAS *siswa; // Sekalian belajar pointer lah :v
    // siswa = (IDENTITAS*) malloc(sizeof(IDENTITAS)); // #include <cstdlib> (Gaya Bahasa C)
    siswa = new IDENTITAS(); //Gaya c++

    strcpy(siswa->nama, "Bayu Samudra");
    strcpy(siswa->kelas, "11 IPA 2");

    char* Nama = (char*) siswa->nama;
    char* ptr = (char*) memchr(Nama,'a',50);

    cout << ptr << endl; // Setara dengan printf("%s\n", ptr);
    printf("%s\n\n", ptr);

    cout << *ptr << endl; // Setara dengan printf("%C\n", *ptr);
    printf("%C\n", *ptr);
    return 0;
}