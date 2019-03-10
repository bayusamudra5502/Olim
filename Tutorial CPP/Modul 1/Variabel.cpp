#include <bits/stdc++.h>
using namespace std;

// Pembahasan mengenai Variabel, Tipe Data, dan Konstanta

/*
    QnA lah :
        - Variabel, Mahluk apakah itu?
            Secara sederhana, bisa kita sebut variabel adalah sesuatu yang bisa diisi sama sebuah nilai. Variabel ini bisa diubah" lhoo.
        
        - Apa saja jenis variabel?
            Berdasarkan tempat didefinisikannya, variabel ada 2 jenis lho.. Yaitu variabel lokal dan global.
        
        - Hah, mahluk apa lagi itu?
            Kalem, Variabel global itu adalah variabel yg bisa kita akses sepanjang program. Contoh :
*/
    int AkuVariabelGlobal; // Ini adalah variabel global

int main(){
/*
            Klo lokal, cuma dikenal di dalam fungsi aja. Contoh :
*/
    int AkuVariabelLokal; // Ini adalah variabel lokal
    
    /*
        Bagaimana cara akses variabel?
            Pake operator assignment. klo di pascalmah mirip := tapi di C++ pake =
            Awas, variabel yg diakses harus masih dalam satu skop. Contoh:
    */
    AkuVariabelLokal = 0;

    /*
        - Aku penah baca Variable Scope (Perasaan baru tadi) ? Apa itu?
            Ada yg disebut dengan skop variabel, skop variabel secara sederhana bisa disebut kapan sih kita bisa pake
            variabel itu. Pada baris ke 27 ini, kita bisa akses variabel AkuVariabelGlobal dan AkuVariabelLokal
            karena sudah dalam skopnya. Tapi, variabel AkuGabolehDiaksesDiBaris28Lho gabisa diakses disini.

    */

   // AkuGabolehDiaksesLho = 0; itu haram bro

   int AkuGabolehDiaksesLho;

    /* - Apa itu konstanta?
            Mirip kayak di MTK, klo di MTK mah kayak sebangsa PI dkk. Konstanta ini gaboleh diganti sepanjang program.
            Contoh :
    */

   const double PI = 2*acos(0); // CARA I : Menggunakan const
   #define MAX 100 // CARA II : menggunakan #define

    /*
        - WOY, jelasin tipe data dong?
            Hmm.. Ini pertanyaan jawabannya panjang juga wkwkwkkwwk
            Singkatnya tipe data digunakan untuk ngasih tau komputer variabel itu bakal diisi apa

            Dalam teorinya, Tipe Data dibagi menjadi 2 regu besar yaitu

            1. TIPE DATA DASAR
                Yg masuk ke tipe data ini adalah bilangan bulat (integer), bilangan real (floating-point),
                boolean, sama karakter.

                a. BILANGAN BULAT
                    Dalam C++, ada beberapa jenis bilangan bulat, diantaranya

                    -> int : Dipake klo rentang data yg disimpan disini diantara -10^9 s.d. 10^9 (32-bit)       
    */
                        int BilBul1 = 12;
    /*
                    -> long int : Dipake klo rentang data yg disimpan diantara -10^9 s.d. 10^9   
    */
                        long int BilBul2 = 15;
    /*
                    -> long long int : Dipake klo datanya diantara -10^18 s.d. 9 x 10^18
    */
                        long long int BilBul3 = 17;
    /*
                    Note : Klo butuh data yg lebih besar, bisa pake unsigned.
                        Batas unsigned int : 0 s.d. 4 x 10^9 (32-bit)
                        Batas unsigned long int : 0 s.d. 4 x 10^9
                        Batas unsigned long long int : 0 s.d. 1,8 x 10^19

                        contoh :

    */
                        unsigned int UBilbil1 = 1;
                        unsigned int long UBilbul2 = 2;
                        unsigned int long long UBilbul3 = 3;                  
    return 0;
}