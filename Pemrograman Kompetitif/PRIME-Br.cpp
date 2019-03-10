#include <bits/stdc++.h>
using namespace std;

long long int expmod(long long int n, long long int e, long long int mod){
    if(e == 1){
        return (n % mod);
    }else{
        if(e % 2 == 1){
            return ((long long int) (pow(expmod(n,(long long int) (e/2) ,mod),2) * n) % mod);
        }else{
            return ((long long int) (pow(expmod(n,(long long int) (e/2) ,mod),2)) % mod);
        }
    }
}

vector<unsigned long long int> primelist;

bool checkprime(unsigned long long int i){
    // Fermat
    bool hasil = true;

  //  for(int x = 2;x <= 1000; x++){
    //    if(expmod(x, i-1, i) != 1){
      //      hasil = false;
        //    break;
        //}
    //}
         
    for(unsigned long long int n = 0; (primelist[n] <= ((unsigned long long int) sqrt(i))) &&( n < primelist.size()) ; n++){
         
        if(i % primelist[n] == 0){
            hasil = false;
            break;
        }
    }

    if(hasil && i < 1'000'000){
        primelist.push_back(i);
    }

    return hasil;
}

int main(){
    int hasil = 0;
    primelist.push_back(2);
    for(unsigned long long int i = 2; i < 1'000'000; i++){
        unsigned long long int num = (unsigned long long int) pow(i,2)+1;

        if(checkprime(num))
            hasil = (hasil + num) % 10007;;
        
    }

    printf("%d", hasil);
    return 0;
}