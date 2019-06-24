#include <bits/stdc++.h>
using namespace std;

int main()
{
    auto f = [](int x) {
        return 2 * x + 5;
    };

    int y = 10;
    auto p = [&f, &y](int x) {
        return (f(x) - 5) * y;
    };

    cout << p(12);
    return 0;
}