#include <bits/stdc++.h>
using namespace std;

// int main(){
    // int n,q;
    // int arr[10005][30005];

//     cin >> n >> q;
//     for(int i = 0; i < n; i++){
//         int x;
//         cin >> x;

//         for(int j = 0; j < x; j++){
//             cin >> arr[i][j];
//         }
            
//     }

//     for(int i = 0; i < q; i++){
//         int a,b;
//         cin >> a >> b;
//         printf("%d\n", arr[a][b]);
//     }
// }

int main(){
    int n,q, tmp = 0;
    int sp[100'005], arr[300'005];

    sp[0] = 0;
    cin >> n >> q;
    for(int i = 1; i <= n; i++){
        int x;
        cin >> x;

        for(int j = 0; j < x; j++, tmp++){
            cin >> arr[tmp];
        }

        sp[i] = tmp;
    }

    for(int i = 0; i < q; i++){
        int a,b;
        cin >> a >> b;
        printf("%d\n", arr[sp[a]+b]);
    }   

}