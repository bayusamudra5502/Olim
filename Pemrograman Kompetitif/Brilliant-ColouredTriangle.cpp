#include <bits/stdc++.h>
using namespace std;

// Coloured Triangle
//
// LINK : https://brilliant.org/problems/coloured-triangle/

char str[11000];

char missing(char A, char B){
    if((A == 'R' && B == 'G') || (A == 'G' && B == 'R')){
    return 'B';
}else if((A == 'R' && B == 'B') || (A == 'B' && B == 'R')){
    return 'G';
}else{
    return 'R';
}
}
        
char huruf(int N){
    if(N == 1){
       return str[0];
    }else{
       for(int i = 0; i < N-1; i++){
           if(str[i] != str[i+1]){
                str[i] = missing(str[i],str[i+1]);
           }
       }
        
       return huruf(N-1);
    }
}

int main(){
   int N;
   scanf("%d", &N);
   scanf("%s", str);

   printf("%c\n",huruf(N));
}
