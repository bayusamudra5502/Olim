#include <string>
#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;

int main(){
    // Mirip strstr() tapi ngeluarin indeks

    string A;
    A = "Saya Adalah Anak Gembala";
    
    A.at(5) = 'a'; // Demo at
    cout << A << endl << A.find("adalah") << endl;
}