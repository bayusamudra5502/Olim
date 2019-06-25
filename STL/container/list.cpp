#include <list>
#include <iostream>
#include <algorithm>
using namespace std;

void printl(list<int> l);
void printl2(list<int> l);

int main()
{
    list<int> l({0, 0, 0, 0, 0, 0});

    // INSERTION
    l.push_back(1);
    l.push_front(0);
    l.emplace_back(2);
    l.emplace_front(0);
    l.emplace(next(l.begin(), 2), 9999);
    l.insert(next(l.begin(), 2), 8888);

    // l.assign

    printl(l);

    // Akses Elemen
    cout << *(next(l.begin(), 2)) << " ";

    auto p = l.begin();
    advance(p, 3); // Pindahin pointer
    cout << *p << endl;
    advance(p, -1);
    cout << *p << endl;

    auto front = l.front();
    auto back = l.back();

    cout << front << " " << back << endl;

    // SIZE
    cout << "SIZE : " << l.size() << endl;

    // ERASURE
    l.pop_front();
    l.pop_back();
    l.erase(l.begin());
    printl(l);

    l.unique();
    printl(l);

    l.clear();

    // List Operation
    list<int> l1({1, 2, 3, 4, 5, 6}), l2({7, 8, 9, 10}), l3({-3, -2, -1, 0});
    l3.merge(l1); // back splice
    l2.splice(l2.begin(), l3);

    printl2(l2);

    // REVERSE
    l2.reverse();

    printl2(l2);
    return 0;
}

void printl(list<int> l)
{
    for (auto i = l.begin(); i != l.end(); i++)
        cout << *i << " ";

    cout << endl;
}

void printl2(list<int> l)
{
    for (int i : l)
        cout << i << " ";

    cout << endl;
}