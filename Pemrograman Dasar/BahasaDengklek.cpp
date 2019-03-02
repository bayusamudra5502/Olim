#include <bits/stdc++.h>
using namespace std;

int inverse(int c);

int main(){
    char str[105];
    scanf("%s", str);

    for(int i = 0; i < (int) strlen(str); i++){
        str[i] = (char) inverse((int) str[i]);
    }

    printf("%s\n",str);
    return 0;
}

int inverse(int c){
    if(islower(c) != 0){ // cctype
        return toupper(c);
    }else{
        return tolower(c);
    }
}