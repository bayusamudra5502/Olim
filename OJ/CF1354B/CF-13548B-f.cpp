#include <bits/stdc++.h>
using namespace std;

// ? Link : https://codeforces.com/problemset/problem/1354/B
const int INF = 999'999;
int db[4][200'050];

bool ada(int l, int r){
    return (db[1][r] - db[1][l-1] > 0) &&
        (db[2][r] - db[2][l-1] > 0) &&
        (db[3][r] - db[3][l-1] > 0);
}

int pendek(int l, int r, int strlen){
    if(!ada(l,r)){
        return INF;
    }

    int lr = l, rr = r;
    while(lr < rr){  
        int mid = (lr+rr) / 2;
        
        if(ada(l,mid)){
            rr = mid;
        }else{
            lr = mid + 1;
        }
    }
    r = rr;
    lr = l;

    while(lr < rr){
        int mid = ceil((double) (lr+rr)/2);
        if(ada(mid, r)){
            lr = mid;
        }else{
            rr = mid - 1;
        }
    }

    l = lr;
    return min(r-l+1, pendek(l+1, strlen, strlen));
}

int main(){
    int tc;
    scanf("%d", &tc);

    // TODO: INIT:
    for(int t = 0; t < tc; t++){
        for(int i = 0; i < 4; i++)
            for(int j = 0; j < 200'050; j++)
                db[i][j] = 0;

        char str[200'050];
        scanf("%s", str);

        for(int i = 0; i < (int) strlen(str); i++){
            db[1][i+1] = db[1][i];
            db[2][i+1] = db[2][i];
            db[3][i+1] = db[3][i];

            db[(int)str[i] - (int)'0'][i+1]++;
        }

        // TODO: LAKUKAN BINSER
        int l = 1;
        int r = strlen(str);

        if(ada(l,r)){
            printf("%d\n", pendek(l,r,strlen(str)));
        }else{
            printf("0\n");
        }
    }
    
    return 0;
}