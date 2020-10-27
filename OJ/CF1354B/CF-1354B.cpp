#include <bits/stdc++.h>
using namespace std;

// ? Link : https://codeforces.com/problemset/problem/1354/B
const int INF = 1'999'999;
int db[4][200'050];

bool ada(int l, int r){
    return (db[1][r] - db[1][l-1] > 0) &&
        (db[2][r] - db[2][l-1] > 0) &&
        (db[3][r] - db[3][l-1] > 0);
}

int main(){
    int tc;
    scanf("%d", &tc);

    // TODO: INIT:
    for(int t = 0; t < tc; t++){
        // for(int i = 0; i < 4; i++)
        //     for(int j = 0; j < 200'050; j++)
        //         db[i][j] = 0;
        db[0][0] = 0;
        db[1][0] = 0;
        db[2][0] = 0;

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
        int r = strlen(str), strln = strlen(str);

        if(ada(l,r)){
            // TODO: Cari R sesuai
            int minimal = INF;

            while(ada(l,r)){
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
                minimal = min(minimal, r-l+1);
                r = strln;
                l += 1;
            }

            printf("%d\n", minimal);
        }else{
            printf("0\n");
        }
    }
    
    return 0;
}