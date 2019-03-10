#include <bits/stdc++.h>
using namespace std;

long long int gcd(long int A, long int B);
long long int lcm(long int A, long int B);

int main(){
    long int A,B,C,D;
    long long int E,F;

    scanf("%ld %ld", &A, &B);
    scanf("%ld %ld", &C, &D);

    if(B<0){
        A = -A;
        B = -B;
    }

    if(D < 0){
        C = -C;
        D = -D;
    }

    F = lcm(B,D);
    E = (F/B*A) + (F/D*C);

    long long int tmp = gcd(abs(E),abs(F));
    if(tmp != 1){
        E = E / tmp;
        F = F / tmp;
    }

    printf("%lld %lld\n", E, F);
}

long long int gcd(long int A, long int B){
    if(B == 0){
        return A;
    }else{
        return gcd(B, A%B);
    }
}

long long int lcm(long int A, long int B){
    return (A*B)/(gcd(A,B));
}