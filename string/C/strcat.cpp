#include <cstring>
#include <cstdio>
using namespace std;

int main(){
    char* str1 = (char*) "Belalang Loncat Loncat"; // Belalang kupu-kupu kalee
    // char* str2 = (char*) "Pok Ame Ame "; Tujuan harus memiliki space yg cukup (Segementation Fault)
    char str2[100];
    strcpy(str2, "Pok Ame Ame ");

    printf("Function Output: %s\n",strcat(str2,str1)); // Output hasil penggabungan
    printf("str2 : %s\n", str2);
    return 0;
}