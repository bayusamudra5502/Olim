#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    scanf("%d", &n);

    for(int i = n; i > 0; i--){
        if(n % i == 0){
            printf("%d\n", i);
        }
    }

    return 0;
}