#include <bits/stdc++.h>
using namespace std;

struct Beras{
    double C1;
    int C; // Harga
    int W; // berat
};

double f(int X, int N, vector<Beras> data){
    if(X <= 0){
        return 0;
    }else{
        if(data.size() == 0){
            return 0;
        }else{
            double maxe = 0;
            for(unsigned int i = 0; i < data.size(); i++){
                vector<Beras> cp(data);
                cp.at(i).W = cp.at(i).W - 1;

                if(cp.at(i).W == 0){
                    cp.erase(cp.begin() + i);
                }
                
                maxe = max(f(X-1, N, cp) + data.at(i).C1, maxe);
            }

            return maxe;
        }
    }
}

int main(){
    int N, X;
    scanf("%d %d", &N, &X);

    vector<Beras> data(N);

    for(int i = 0; i < N; i++){
        scanf("%d", &data.at(i).W);
    }

    for(int i = 0; i < N; i++){
        scanf("%d", &data.at(i).C);
        data.at(i).C1 = (double) data.at(i).C / data.at(i).W;
    }

    printf("%.5lf\n", f(X,N,data));
}

