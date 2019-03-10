#include <bits/stdc++.h>
using namespace std;

// Pesta Bebek
//
// Link : https://training.ia-toki.org/training/curriculums/1/courses/11/chapters/62/problems/294/

char nama[1005][15];
int back = 1;

int insert(char* name){
    strcpy(nama[back], name);

    int loc = back;
    for(int i = 0; i <= back; i++){
        if(strcmp(nama[loc],nama[loc-1]) < 0){
            swap(nama[loc],nama[loc-1]);
            loc--;
        }else{
            break;
        }
    }

    back++;
    return loc;
}

int main(){
    int N;
    scanf("%d", &N);

    for(int i = 0; i < N; i++){
        char tmp[15];
        scanf("%s", tmp);
        printf("%d\n", insert(tmp));
    }
}