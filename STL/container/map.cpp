#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    map<char *, int> db;
    db.insert(make_pair((char *)"Ayam", 12));
    db.insert(make_pair((char *)"Bebek", 10));
    db.insert(make_pair((char *)"Domba", 2));
    db.insert(make_pair((char *)"Sapi", 11));

    cout << db.at((char *)"Ayam") << endl;
    return 0;
}
