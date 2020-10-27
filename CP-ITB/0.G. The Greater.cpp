#include <bits/stdc++.h>
using namespace std;

int big(int a, int b, int c, int d){
    int max = a;
    max = max < b ? b : max;
    max = max < c ? c : max;
    max = max < d ? d : max;

    return max;
}

int main(){
    int a,b,c,d;
    cin >> a >> b >> c >> d;

    cout << big(a,b,c,d) << endl;
}