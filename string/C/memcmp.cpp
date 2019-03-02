#include <bits/stdc++.h>
using namespace std;

// KEUNGGULAN C++11: Ga perlu pake struct dalam definisi struktur
struct IDENTITAS{
    char nama[50];
    char kelas[50];
    };

int main(){
    IDENTITAS aku, lama, saya, anda;
    strcpy(aku.nama,"Bayu Samudra");
    strcpy(aku.kelas,"11 IPA 2");

    strcpy(lama.nama, "Bayu Samudra");
    strcpy(lama.kelas, "10 IPA 2");

    strcpy(anda.nama, "Bayu Samudra");
    strcpy(anda.kelas, "10 IPA 2");

    memcpy(&saya, &aku, sizeof(IDENTITAS));

     printf("Aku-Lama : %d\nAku-Saya : %d\nAnda-Lama : %d\n",
            memcmp(&aku, &lama,sizeof(IDENTITAS)),
            memcmp(&aku, &saya,sizeof(IDENTITAS)),
            memcmp(&anda, &lama,sizeof(IDENTITAS)));

    /*
            Gaboleh Ternyata Hehehe (Hasilnya ga bener semua kann)
            https://stackoverflow.com/questions/141720/how-do-you-compare-structs-for-equality-in-c

            Nilainya sama kalo identik pisann (Pake memcpy)

    */

   
    return 0;
}