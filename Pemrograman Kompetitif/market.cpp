#include <bits/stdc++.h>
using namespace std;

// Bismillah..
//
// Pasar RaKYAT
// Link : https://training.ia-toki.org/training/curriculums/1/courses/11/chapters/51/problems/228/

int gcd(int A, int B){
    if(B == 0){
        return A;
    }else{
        return gcd(B, A % B);
    }
}

int lcm(int A, int B){
    return ((A*B)/gcd(A,B));
}

int main(){
    int waktu = 0;
    int N,tmp;

    scanf("%d", &N);

    for(int i = 0; i < N; i++){
        scanf("%d", &tmp);

        if(i < 1){
            waktu = tmp;    
        }else{
            waktu = lcm(waktu, tmp);
        }
    }

    printf("%d\n", waktu);

    return 0;
}