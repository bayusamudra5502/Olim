#include <bits/stdc++.h>
using namespace std;

// Hapus Satu Saja
//
// Link : https://training.ia-toki.org/training/curriculums/1/courses/11/chapters/50/problems/224/

bool check(char* str1, char* str2, int N){
    
    if(N>1){
        return false;
    }

    if(*str1 == *str2){
        if(*str1 == '\0'){
            if(N == 1){
                return true;
            }else{
                return false;
            }
        }else{
            return check(str1+1, str2+1, N);
        }
    }else{
        return check(str1+1,str2,N+1);
    }
}

int main(){
    char str1[1005], str2[1005];

    scanf("%s", str1);
    scanf("%s", str2);

    if(check(str1,str2,0)){
        printf("Tentu saja bisa!\n");
    }else{
        printf("Wah, tidak bisa :(\n");
    }
}