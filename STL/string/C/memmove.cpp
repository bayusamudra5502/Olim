#include <bits/stdc++.h>
using namespace std;

// Masih misteri kawan :v

int main(){
    char str1[25], str2[25], str3[26]; //Cobain gera pake str2[25]!
    strcpy(str1,"NAMA SAYA ADALAH .......");
    strcpy(str2,"NAMA SAYA ADALAH .......");
    strcpy(str3,"Bayu Samudra");

    memcpy(str1+17, str3, strlen(str3)); // Naha bisa beda sama yg dibawah!!!
    memmove(str2+17, str3, strlen(str3));
    printf("Satu : %s (%d) \nDua : %s (%d) \n", str1, sizeof(str1), str2, sizeof(str2));

    /*
        Perbedaan memmove dan memcpy :
        https://stackoverflow.com/questions/4415910/memcpy-vs-memmove
    */
    return 0;
}