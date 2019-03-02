#include <cstring>
#include <cstdio>
using namespace std;

typedef struct{
    char nama[50];
    char kelas[50];
    } IDENTITAS;

int main(){
    IDENTITAS satu, dua;
    strcpy(satu.nama, "Bayu Samudra");
    strcpy(satu.kelas, "11 IPA 2");

    memcpy(&dua, &satu, sizeof(IDENTITAS)); // Salin struktur satu ke dua dengan panjang IDENTITAS
    printf("Nama : %s\nKelas : %s\n", dua.nama, dua.kelas);
    return 0;
}