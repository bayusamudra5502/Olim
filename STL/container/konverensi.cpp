#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    // KOnversi Vector to list
    vector<int> data({4, 21, 42, 11, 22, 4, 8, 0});
    list<int> l(data.begin(), data.end());

    l.sort();

    // KOnversi List to Vector
    vector<int> result(l.begin(), l.end());

    for (int x : result)
        cout << x << " ";
    cout << endl;

    return 0;
}
