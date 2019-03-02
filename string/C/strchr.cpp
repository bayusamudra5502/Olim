#include <bits/stdc++.h> // Biar cepet
using namespace std;

int main(){
    char* str = (char*) "Kucingku Belang Lima Sungguh Manis Rupanya";
    char cari = 'u';
    char* temukan;

    temukan = strchr(str, (int) cari);

    for(int i = 1; temukan != NULL; i++){ // NULL itu 0 (Eling we basa jerman)
        printf("temukan [%d] : %s\n",i, temukan);
        temukan = strchr(temukan + 1, (int) cari);
    }
    
    return 0;
}