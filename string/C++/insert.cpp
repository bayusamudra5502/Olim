#include <string>
#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;

int main(){
    string A = "belalangsembah!";
    A.insert(8," "); // Waw singkat sekali :v

    cout << A  << endl;
    A.erase(15); // Hapus karakter ke- 15

    cout << A << endl;

    A.clear(); // Bantaii...
    return 0;
}