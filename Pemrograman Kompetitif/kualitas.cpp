#include <bits/stdc++.h>
using namespace std;

int arr[100005];
int back = 0;

int cmp(const void* a, const void* b){
    return *((int*) a) - *((int*) b);
}

void insert(int N){
    arr[back] = N;

    /*
    for(int i = back; i > 0; i--){
        if(arr[i-1] > arr[i]){
            swap(arr[i-1],arr[i]);
        }else{
            break;
        }
    }
    */

    back++;
}

int main(){
    int n;
    float median;

    scanf("%d", &n);
    for(int i = 0; i < n;  i++){
        int tmp;
        scanf("%d", &tmp);

        insert(tmp);
    }

    qsort(arr, n ,sizeof(int), cmp);

    int center = (n-1)/2;
    if(n%2 == 0){
        median = (float) .5 * (arr[center] + arr[center+1]);
    }else{
        median = (float) arr[center];
    }

    printf("%.1f\n", median);

    return 0;
}