#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m = 0;
    long long int sum = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        int tmp;
        cin >> tmp;

        sum += tmp;
        m = max(m,tmp);
    }
   
    if(sum % 2 == 0 && 2*m <= sum){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
}