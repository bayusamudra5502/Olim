#include <string>
#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    string A;
    A = "Anak ayam";

    string B(A);
    string C(A,5,4);

    char* str = (char*) "Belalang Sembah";
    string D(str);
    string E(str,9,6);

    cout << "Masukan Nama Panggiilan : ";
    string F;
    cin >> F;

    string G;
    cout << "Masukan Umur : ";
    scanf("%s", const_cast<char*>(G.c_str()));

    cout << A << endl << B << endl << C << endl << D << endl << E << endl;
    printf("%s\n%s\n",F.c_str(),G.c_str());

}