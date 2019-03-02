#include <cstring>
#include <cstdio>
// #include <bits/stdc++.h> : CHEAT
using namespace std;

int main(){
    char str1[50];
    char* str2;

    str2 = (char*) "Aku anak sehat";
    strcpy(str1,str2); // Menyalin str2 ke str1. Mengeluarkan apa yg disalin.

    printf("str1 : %s\nstr2 : %s\n", str1, str2); 
    return 0;
}