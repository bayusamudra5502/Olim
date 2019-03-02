#include <bits/stdc++.h>
using namespace std;

int main(){
    char bahasa[] = "Bahasa Indonesia,Bahasa Prancis,Bahasa Arab,Bahasa Jerman,Bahasa Inggris";
    char* ptr;
    ptr = strtok(bahasa , ",");

    printf("DAFTAR RAGAM BAHASA\n");
    while(ptr != NULL){
        printf("%s\n", ptr);
        ptr = strtok(NULL, ",");
    }
    return 0;
}