#include <bits/stdc++.h>
using namespace std;

/*
    Mencoba kembali Codeforce
    ? Link : https://codeforces.com/contest/1354/problem/A?locale=en
*/

int main(){
    int tc;
    scanf("%d", &tc);

    for(int i = 0; i < tc; i++){
        long long int a, b, c, d;
        scanf("%lld %lld %lld %lld", &a, &b, &c, &d);

        if(b >= a){
            printf("%lld\n", b);
        }else{
            int add = c - d;
            if(add > 0){
                long long int sisa = a - b;
                long long int n = ceil((double) sisa / add);

                printf("%lld\n", n * c + b);
            }else{
                printf("-1\n");    
            }
        }
    }
}