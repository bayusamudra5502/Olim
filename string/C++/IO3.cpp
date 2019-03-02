#include <string>
#include <cstdio>
using namespace std;

int main(){
    string str;
    printf("Masukan Nama Anda : ");
    scanf("%[^\n]s", const_cast<char*>(str.c_str())); //Biar ga const char*
    printf("\nNama Anda : %s\n",(str.c_str()));
    return 0;
}