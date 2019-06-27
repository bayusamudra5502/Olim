#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    multimap<char *, int> db;
    // INSERTI0ON
    db.insert(make_pair((char *)"Ayam", 12));
    db.insert(make_pair((char *)"Bebek", 10));
    db.insert(make_pair((char *)"Domba", 2));
    db.insert(make_pair((char *)"Sapi", 11));
    db.insert(pair<char *, int>((char *)"Kucing", 99));
    db.insert(make_pair((char *)"Ayam", 6));
    db.insert(make_pair((char *)"Ayam", 10));
    db.insert(make_pair((char *)"Bebek", 7));

    // ACCESS
    cout << endl;
    cout << (db.find((char *)"Ayam") != db.end()) << endl;
    cout << (db.find((char *)"Kuda") != db.end()) << endl;

    cout << (*db.find((char *)"Ayam")).second << endl;

    cout << endl;
    for (auto i = db.lower_bound((char *)"Ayam"); i != db.upper_bound((char *)"Ayam"); i++)
    {
        cout << (*i).first << " : " << (*i).second << endl;
    }

    cout << endl;
    // ITERATOR
    cout << endl;
    for (auto i = db.begin(); i != db.end(); i++)
        cout << (*i).first << " : " << (*i).second << endl;

    cout << endl;

    // SIZE
    cout << db.size() << endl;
    // db.empty()

    // ERASURE
    db.erase((char *)"Belalang");
    return 0;
}
