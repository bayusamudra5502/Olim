#include <bits/stdc++.h>
using namespace std;

int comp(const void* a, const void* b){
    return *((int*) a) - *((int*) b);
}

int main(){
    int n,k,data[1005];
    scanf("%d %d", &n, &k);

    for(int i = 0; i < n; i++)
        scanf("%d", &data[i]);

    qsort(data, n, sizeof(int), comp);
    printf("%d\n", data[k-1]);
    return 0;
}