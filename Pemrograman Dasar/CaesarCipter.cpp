#include <bits/stdc++.h>
using namespace std;

int main(){
    char in[105];
    int n;

    scanf("%s\n%d", in, &n);
    for(int i = 0; in[i] != '\0'; i++){
       in[i] = (char) ((((int) in[i] - 97) + n) % 26) + 97; // Memanfaatkan Tabel ASCII
    }

    printf("%s\n", in);
    
    /*
        Catatan ASCII :
        A = 65 ; a = 97
    
    */

    return 0;
}