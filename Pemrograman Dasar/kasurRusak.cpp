#include <bits/stdc++.h>
using namespace std;

char str[105];
bool palindrom(int L, int R){
    if(str[L] == str[R]){
        if(L < R){
            return palindrom(L+1,R-1);
        }else{
            //Base Case
            return true;
        }
    }else{
        return false;
    }
}

int main(){
    scanf("%s",str);
    if(palindrom(0,strlen(str)-1)){
        printf("YA\n");
    }else{
        printf("BUKAN\n");
    }
    return 0;
}