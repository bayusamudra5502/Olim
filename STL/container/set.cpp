#include <bits/stdc++.h>
using namespace std;

int compar(int a, int b)
{
    return a - b;
}

int main()
{
    set<int, less<int>> db; // greater<int>
    db.insert(12);
    db.insert(78);
    db.insert(99);
    db.insert(13);
    db.insert(21);

    for_each(db.begin(), db.end(), [db](int x) {
        cout << x << " ";
    });

    cout << "Count : " << db.size() << endl;

    cout << endl;
    cout << db.count(21) << endl;

    db.erase(13);
    for_each(db.begin(), db.end(), [db](int x) {
        cout << x << " ";
    });
    cout << "Count : " << db.size() << endl;

    db.clear();
    // lower_bound, upper_bound, equal_range
    return 0;
}