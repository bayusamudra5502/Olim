#include <cstring>
#include <cstdio>
using namespace std;

int main(){
    char* str1 = (char*) "Aku Anak Sehat Tubuhku Kuat";
    char str2[50];

    printf("Function Output: %s\n",strncpy(str2,str1,3)); // Menyalin string sebanyak 3 (Aku)
    printf("str2 : %s\n", str2);
    return 0;

    /*
        Keterangan : 
        
        Karakter \0 harus ditambahkan secara manual!
        Baca : http://www.cplusplus.com/reference/cstring/strncpy/
    */
}