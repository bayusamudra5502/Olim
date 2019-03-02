#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, hasil = 0;
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        int tmp = 0;
        scanf("%d", &tmp);
        hasil += tmp;
    }

    printf("%d\n",hasil);
}