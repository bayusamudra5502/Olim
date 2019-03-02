#include <cstring>
#include <cstdio>
using namespace std;

int main(){
    char* temp = (char*) "Namaku adalah <nama>";
    char* nama = (char*) "Bayu Samudra";
    char str[100];

    printf("Keluaran : %s\n", strncat(str,temp,14)); // Keluaran berupa apa yg disambungkan 
    // Kasus diatas sebenernya bisa juga menggunakan strncpy()

    strcat(str, nama);

    printf("str : %s\n", str);
    return 0;
}