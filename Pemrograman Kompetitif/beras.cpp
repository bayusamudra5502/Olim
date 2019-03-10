#include <bits/stdc++.h>
using namespace std;

struct Beras{
    double C1;
    int C; // Harga
    int W; // berat
} daftar[1005];

int compar(const void* a, const void* b){
    return ((((Beras*) b)->C1)-(((Beras*) a)->C1));
}

int main(){
    int N, x;
    scanf("%d %d", &N, &x);

    for(int i = 0; i < N; i++){
        scanf("%d", &daftar[i].W);
    }

    for(int i = 0; i < N; i++){
        scanf("%d", &daftar[i].C);
    }

    for(int i = 0; i < N; i++){
        daftar[i].C1 = (double) daftar[i].C/daftar[i].W;
    }

    qsort(daftar, N, sizeof(Beras), compar);

    double max = 0;
    for(int i = 0; i < N; i++){
        if(daftar[i].W <= x){
            max += daftar[i].C;
            x -= daftar[i].W;
        }else{
            max += daftar[i].C1 * x;
            x -= x;
            break;
        }
    }

    printf("%.5f\n", max);
}