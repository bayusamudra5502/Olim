#include <string>
#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;

int main(){
    string A = "Namaku <nama>";
    string B;

    // printf("%[^\n]s", const_cast<char*>(B.c_str()));
    getline(cin, B); // Harus melibatkan <string>

    A.replace(7, B.size(), B); // Namaku Bayu Samudra

    cout << A << endl;
    return 0;
}