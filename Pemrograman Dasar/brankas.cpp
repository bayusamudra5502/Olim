#include <bits/stdc++.h>
using namespace std;

char karakter[] = "123456789";
int k,n;
char tmp[9];

// Menghasilkan semua kombinasi C(n,k)
void brankas(int l, int L){
    if(l > 0){
        for(int i = L; i < n; i++){
            tmp[k-l] = karakter[i];
            brankas(l-1,i+1);
        }
    }else{
        for(int i = 0; i < k; i++){
            printf("%C",tmp[i]);
            if(i < k-1){
                printf(" ");
            }else{
                printf("\n");
            }
        }
    }
}

int main(){
    scanf("%d %d", &n, &k);
    brankas(k,0);
    return 0;
}