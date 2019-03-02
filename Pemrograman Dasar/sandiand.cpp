#include <bits/stdc++.h>
using namespace std;

// Ngerjain Soal Toki lah :v (Pembuangan String - Sandi AND lah)
// Lihat soal : https://training.ia-toki.org/training/curriculums/1/courses/1/chapters/14/problems/52/
// Sama kayak di strstr :v

bool hilangkan(char* str, char* substr);

int main(){
    char substring[100];
    char string[100];
    scanf("%s %s", string, substring);

    while(hilangkan(string,substring)){

    }

    printf("%s\n", string);
    return 0;
}

bool hilangkan(char* str, char* substr){
    bool hasil = false;
    char tmp[100];
    char* batas;
    batas = strstr(str, substr);

    if(batas != NULL){
        // strncpy(tmp, str, (int) (batas - str)); // -> Kenapa-napa nih
        strncpy(tmp, str, strlen(str) - strlen(batas));
        tmp[strlen(str) - strlen(batas)] = '\0'; // Ternyata gegara ada karakter del :v
        strcat(tmp, batas + strlen(substr));
        strcpy(str,tmp);
        hasil = true;
    }

    return hasil;
}