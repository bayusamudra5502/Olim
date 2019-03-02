#include <bits/stdc++.h>
using namespace std;

struct faktor{
    int X;
    int Y;
};

int dekat(int D, struct faktor f1, struct faktor f2);

int main(){
    struct faktor data[1005];
    int n,d;
    scanf("%d %d", &n, &d);

    for(int i=0; i < n; i++){
        scanf("%d %d", &data[i].X, &data[i].Y);
    }

    int min = 0, max = 0;
    for(int i = 0; i < n; i++){
        for(int j = i+1 ; j < n; j++){
            if(i == 0 && j == 1){
                min = dekat(d,data[i],data[j]);
                max = dekat(d,data[i],data[j]);
            }else{
                int tmp = dekat(d, data[i], data[j]);
                if(tmp < min){
                    min = tmp;
                }

                if(tmp > max){
                    max = tmp;
                }
            }
        }
    }

    printf("%d %d\n", min, max);
    return 0;
}

int dekat(int D, struct faktor f1, struct faktor f2){
    return ((int) (pow(abs(f2.X - f1.X), D) + 
                    pow(abs(f2.Y- f1.Y), D) ));
}