#include <bits/stdc++.h>
using namespace std;

//Awas Jangan modus coyy :v
int main(){
    int cnt[1005];
    int n;

    scanf("%d", &n);
    for(int i = 0; i < 1005; i++){
        cnt[i] = 0;
    }

    for(int i = 0; i < n; i++){
        int tmp;
        scanf("%d", &tmp);

        cnt[tmp]++;
    }

    int max = 0, modus = 0;
    for(int i = 1000; i > 0; i--){
        if(cnt[i] > max){
            modus = i;
            max = cnt[i];
        }
    }

    printf("%d\n",modus);

    return 0;
}