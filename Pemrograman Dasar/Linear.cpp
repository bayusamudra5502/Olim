#include <bits/stdc++.h>
using namespace std;

int main(){
    int n = 0, d = 0, i = 0;
    bool ketemu = false;

    scanf("%d %d", &n, &d);

    for(i = 0; i < n; i++){
        int tmp = 0;
        scanf("%d", &tmp);

        if(tmp == d){
            ketemu = true;
            break;
        }
    }

    if(ketemu){
        printf("%d\n", i);
    }else{
        printf("-1\n");
    }

    return 0;
}