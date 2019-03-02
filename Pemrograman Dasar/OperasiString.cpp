#include <bits/stdc++.h>
using namespace std;

#define MAX 105
void hilangkan(char* str1, char* str2);
void sematkan(char* str1, char* str2, char* str3);

int main(){
    char str1[MAX], str2[MAX], str3[MAX], str4[MAX];
    scanf("%s\n%s\n%s\n%s", str1, str2, str3, str4);

    hilangkan(str1, str2);
    sematkan(str1, str3, str4);
    printf("%s\n", str1);
    return 0;
}

void hilangkan(char* str1, char* str2){
    char* ptr;
    char tmp[MAX];

    ptr = strstr(str1, str2);
    strncpy(tmp,str1, (int) (ptr - str1));
    tmp[ptr - str1] = '\0';

    strcat(tmp, ptr + strlen(str2));

    strcpy(str1, tmp);
}

void sematkan(char* str1, char* str2, char* str3){
    char* ptr;
    char tmp[MAX];

    ptr = strstr(str1, str2);
    strncpy(tmp, str1,  ptr - str1);
    tmp[ptr - str1] = '\0';
    strcat(tmp, str2);
    strcat(tmp, str3);
    strcat(tmp, ptr + strlen(str2));
    
    strcpy(str1, tmp);
}