#include <bits/stdc++.h>
using namespace std;

int digit(int n){
    int hasil = 0;
    
    while(abs(n) > 0){
        n /= 10;
        hasil++;
    }
    
    return hasil;
}

int find_longest(int *numbers, size_t numbers_size)
{
    int len = -1;
    int num;
    
    for(size_t i = 0; i < numbers_size; i++){
        if(digit(numbers[i]) > len){
            num = numbers[i];
            len = digit(numbers[i]);
        }
    }
    
    return num;
}

int main(){
    int numbers[] = {-10, 1, 0, 1, 10};
    printf("%d",find_longest(numbers, 5));
}