#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    long long int sum = 0, tmp;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> tmp;
        sum += tmp;
    }

    printf("%lld\n", sum);
    return 0;
}