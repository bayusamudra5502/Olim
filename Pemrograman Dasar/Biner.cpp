#include <bits/stdc++.h>
using namespace std;

char biner[100];

void generator(int n){
    int mod = n % 2;
    int bagi = (int) n / 2;

    if(bagi != 0){
        generator(bagi);
    }

    if(mod == 0){
        strcat(biner, "0");
    }else{
        strcat(biner, "1");
    }
}

int main(){
    int n;
    scanf("%d", &n);

    generator(n);
    printf("%s\n", biner);

    return 0;
}