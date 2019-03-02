#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, tmp;
    scanf("%d", &n);

    int min, max;
    for(int i = 0; i < n; i++){
        scanf("%d", &tmp);
        if(i == 0){
            max = tmp;
            min = tmp;
        }else{
            if(tmp > max){
                max = tmp;
            }
            if(tmp < min){
                min = tmp;
            }
        }
    }

    printf("%d %d\n", max, min);
    return 0;
}