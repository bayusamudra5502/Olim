/* 
    Mengimpor semua library yang didukung C++. Library adalah kumpulan fungsi C++ yg sudah siap pakai.
*/
#include <bits/stdc++.h>

/* Mencegah menggunakan namespace std setiap memanggil fungsi. Jika tidak menggunakan ini,
   setiap kali kita mau memanggil fungsi printf harus menggunakan std:: terlebih dahulu. Contoh :
   
    // Tanpa using namespace std
    std::printf("Halo Dunia");
    
    // menggunakan using namespace std
    printf("Halo dunia");

 */
using namespace std; 

// PROGRRAM UTAMA
int main(){
    printf("Halo, Dunia\n"); // Menampilkan Halo, Dunia di layar. \n adalah pengganti dari karakter enter.

    cout << "Halo, Dunia" << endl; // Sama seperti diatas, perbedaannya adalah disini kita menggunakan cout. endl adalah pengganti karakter enter.

    /*
        NOTE :

        printf lebih cepat dari cout. printf terdapat pada pustaka cstdio sedangkan cout terdapat pada pustaka iostream.
    */

    return 0; // Keluaran Program
}

/*
    TUGAS!!!

    Kerjakan https://training.ia-toki.org/training/curriculums/1/courses/1/chapters/1/problems/1/
*/