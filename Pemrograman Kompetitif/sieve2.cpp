#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;

lli primelist[100000];
int batas = 0;

lli prime(int N){
    lli i;

    if(batas == 0){
         i = 2;
    }else{
         i = primelist[batas-1] + 1;
    }
   
    while(batas <= N){
        if(batas == 0){
            primelist[0] = 2;
            batas++;
        }else{
            bool prime = true;

            for(int j = 0; j < batas; j++){
                if(i % primelist[j] == 0){
                    prime = false;
                    break;
                }

                if(primelist[j] * primelist[j] > i)
                    break;
            }

            if(prime){
                primelist[batas] = i;
                batas++;
            }
        }
        
        i++;
    }

    return primelist[N-1];
}

int main(){
    int N;
    scanf("%d", &N);

    for(int i = 0; i < N; i++){
        int dat;
        scanf("%d", &dat);

        printf("%lld\n", prime(dat));
    }
}