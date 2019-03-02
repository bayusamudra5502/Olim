#include <string>
#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;

int main(){
    // Aturan masi sama kaya strcmp();
    string A = "Hayoloh";
    string B = "Hayoloh";
    string C(B);
    string D = "hayoloh";
    char* str = (char*) "Hayoloh";

    cout << A.compare(B) << endl;
    cout << A.compare(C) << endl;
    cout << A.compare(D) << endl; // Ambil sisi kiri
    cout << (A == B) << endl; // 1 = True
    cout << (A < D) << endl; // Berdasar tabel ASCII
    cout << A.compare(str) << endl;
    // cout << A.compare(2, A.size() - 1, D);
}