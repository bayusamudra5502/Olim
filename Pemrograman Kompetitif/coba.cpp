#include <bits/stdc++.h>
using namespace std;

typedef int ii;
typedef long int li;
typedef long long int lli;

int main(){
    cout << sizeof(ii) << endl;
    cout << sizeof(li) << endl;
    cout << sizeof(lli) << endl;

    ii a = 700'000'000'000;
    li b = 7000'000'000'000'000'000;
    lli c = 7000'000'000'000'000'000;

    printf("%d %ld %lld\n", a,b,c);
}