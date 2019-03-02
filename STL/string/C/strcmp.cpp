#include <bits/stdc++.h>
using namespace std;

int main(){
    char* str1 = (char*) "BAYU";
    char* str2 = (char*) "bayu";
    char* str3 = (char*) "BAYu";
    char* str4 = (char*) "BAyU";
    char* str5 = (char*) "bayu";

    printf("str1-str2 : %d\nstr2-str1 : %d\nstr1-str3 : %d\nstr3-str4 : %d\nstr2-str5 : %d\n",
                strcmp(str1,str2),
                strcmp(str2,str1),
                strcmp(str1,str3),
                strcmp(str3,str4),
                strcmp(str2,str5));

    printf("\nDengan Limit... \nstr1-str3 (3):%d\n",strncmp(str1,str3,3));
    return 0; 
}