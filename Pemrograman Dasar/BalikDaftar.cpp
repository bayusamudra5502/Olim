#include <bits/stdc++.h>
using namespace std;

int main(){
    int list[100];
    int i = 0;

    while(scanf("%d", &list[i]) != EOF){
        i++;
    }

    i--;

    for(int j = i; j >= 0; j--){
        printf("%d\n", list[j]);
    }

    return 0;
}