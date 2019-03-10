#include <bits/stdc++.h>
using namespace std;

// Pertemuan Pak Dengklek
//
// Link : https://training.ia-toki.org/training/curriculums/1/courses/11/chapters/62/problems/293/

int comp(const void* a, const void* b){
    if(strlen((char*) a) == strlen((char*) b)){
        return strcmp((char*) a,(char*) b);
    }else{
        if(strlen((char*) a) < strlen((char*) b)){
            return -1;
        }else{
            return 1;
        }
    }
    
}

int main(){
    char nama[505][20];
    int N;

    scanf("%d", &N);
    for(int i = 0; i < N; i++)
        scanf("%s", nama[i]);
    
    qsort(nama, N, sizeof(char)*20, comp);
    for(int i = 0; i < N; i++)
        printf("%s\n", nama[i]);
    return 0;
}