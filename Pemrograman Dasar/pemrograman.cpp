#include <bits/stdc++.h>
using namespace std;

// GLOBAL VARIABLE
const char UPPER[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
#define MAX 300 // Kurang panjang ternyata :'

char* tocamel(char* str){
    char* kiri = str;
    char* ptr;
    char* hasil = (char*) malloc(sizeof(char) * MAX);

    ptr = strchr(kiri, '_');

    while(ptr != NULL){
        strncat(hasil, kiri, ptr-kiri);
        ptr[1] = (char) toupper(ptr[1]);
        kiri = ptr + 1;
        ptr = strchr(ptr + 1, '_');
    }

    strcat(hasil, kiri);
    return  hasil;
}


char* tosnake(char* str){
    char* kiri = str;
    char* hasil = (char*) malloc(sizeof(char) * MAX);

    int i = strcspn(kiri, UPPER);
    while(i != (int) strlen(kiri)){
        strncat(hasil,kiri,i);
        strcat(hasil,"_");
        kiri[i] = (char) tolower(kiri[i]);
        kiri += i;
        i = strcspn(kiri, UPPER);
    }
    strcat(hasil,kiri);
    return hasil;
}

int main(){
    char str[MAX];
    char hasil[MAX];
    scanf("%s", str);
    
    if(isupper(str[0]) == 0){
        if(strcspn(str,UPPER) != strlen(str)){
            strcpy(hasil,tosnake(str));
        }else if(strchr(str,'_') != NULL){
            strcpy(hasil, tocamel(str));
        }else{
            strcpy(hasil, str);
        }
    }else{
        strcpy(hasil,str);
    }

    printf("%s\n", hasil);
    return 0;
    
}