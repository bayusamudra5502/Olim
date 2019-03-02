#include <bits/stdc++.h>
using namespace std;

//Anggap Hiburan Semata lah :v
int main(){
    int n, q;
    scanf("%d %d", &n, &q);
    
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    int cari;
    for(int k = 1; k <= q; k++){
        scanf("%d", &cari);

        //Proses mencari
        int jumlah, kiri, kanan;
        bool ketemu = false;
        for(int i = 0; i < n && !ketemu; i++){
            jumlah = 0;
            for(int j = i; j < n; j++){
                jumlah += arr[j];

                if(jumlah == cari){
                    ketemu = true;
                    kiri = i;
                    kanan = j;
                    break;
                }
            }
        }

        if(ketemu){
            printf("Case #%d: %d %d\n",k,kiri,kanan);
        }else{
            printf("Case #%d: -1\n",k);
        }
    }

    return 0;
}