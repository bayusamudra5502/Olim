#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;
typedef vector<lli> vlli;

lli primelist[80000];
bool* sieve;


lli prime(lli N, lli x){
    int p = 0;
    sieve = new bool[N+1];

    for(int i = 1; i <= N; i++){
        sieve[i] = false;
    }

    for(int i = 2; i <= N; i++){
        if(!sieve[i]){
            primelist[p] = i;
            p++;

            int k = i*i;
            while(k <= N){
                sieve[k] = true;
                k += i;
            }
        }
    }

    return primelist[x-1];
}

int main(){
    int N;
    scanf("%d", &N);

    for(int i = 0; i < N; i++){
        int dat;
        scanf("%d", &dat);

        printf("%lld\n", prime(dat*dat+1,dat));
    }
}