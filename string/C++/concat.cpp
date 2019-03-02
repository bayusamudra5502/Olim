#include <string>
#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    // Klo yg di <cstring> : strcat()

    string A = "Belalang ";
    string B = "Kupu-Kupu";

    string  C,D;
    C = "Pok Ame Ame " +A + B;

    D = "Tik Tik Tik... ";
    D.append(C);

    cout << C << endl << D;
}