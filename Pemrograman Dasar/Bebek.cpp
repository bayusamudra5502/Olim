#include <bits/stdc++.h>
using namespace std;

int main(){
    //Bebek Untuk Teman [03]
    int n, orang, rem, bagi;

    scanf("%d %d", &n, &orang);
    bagi = n / orang;
    rem = n % orang;

    printf("masing-masing %d\nbersisa %d\n", bagi, rem);

    return 0;
}