#include <bits/stdc++.h>
using namespace std;

// Kupon Berhadiah
//
// Link : https://training.ia-toki.org/training/curriculums/1/courses/11/chapters/62/problems/289/

typedef long long int lli;

lli diff(lli A, lli B){
    return abs(A-B);
}

int main(){
    lli min = 0;
    lli diffmin = 1000000;

    int N;
    lli Kupon;
    scanf("%d %lld", &N, &Kupon);

    for(int i = 0; i < N; i++){
        lli tmp, tmpdiff;
        scanf("%lld", &tmp);
        tmpdiff = diff(Kupon, tmp);

        if((tmpdiff < diffmin) || ((tmpdiff == diffmin) && (min > tmp))){
            min = tmp;
            diffmin = tmpdiff;
        }
    }

    printf("%lld\n", min);
    return 0;
}