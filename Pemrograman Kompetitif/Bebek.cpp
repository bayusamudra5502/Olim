#include <bits/stdc++.h>
using namespace std;

// Pendataan Berat Bebek
//
// Link : https://training.ia-toki.org/training/curriculums/1/courses/11/chapters/62/problems/291/

typedef long long int lli;

lli bebek[100005];

lli cari(lli L, lli R, lli berat){
    if(L > R){
        return L-1; // Kade WA
    }

    int tengah = (L+R)/2;
    if(bebek[tengah] == berat){
        return tengah;
    }else if(bebek[tengah] > berat){
        return cari(L,tengah-1,berat);
    }else{
        return cari(tengah+1,R,berat);
    }
}


int main(){
    lli N, Q;
    scanf("%lld", &N);

    for(lli i = 0; i < N; i++){
        scanf("%lld", &bebek[i]);
    }

    scanf("%lld", &Q);
    
    for(lli i = 0; i < Q; i++){
        lli L, R;

        scanf("%lld %lld", &L, &R);

        lli hasil = cari(0,N-1,R)-cari(0,N-1,L);
        printf("%lld\n", hasil);
    }

    return 0;
}