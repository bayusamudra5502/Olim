#include <bits/stdc++.h>
using namespace std;

// BIar ga panjang aja inimah, ngubah
// unsigned long long int menjadi tipe
// data ulli
typedef unsigned long long int ulli;

// FUngsi penghitung XOR
ulli xsum(ulli n)
{
    // n % 4 ekuivalen sama n & 3
    if ((n & 3) == 0)
    {
        return n;
    }
    else if ((n & 3) == 1)
    {
        return 1;
    }
    else if ((n & 3) == 2)
    {
        return n + 1;
    }
    else
    {
        return 0;
    }
}

// Fungsi pencetak biner
void bin(ulli i)
{
    if (i > 1)
        bin(i / 2);

    cout << (i & 1);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ulli l, r;
    cin >> l >> r;

    ulli result = xsum(r) ^ xsum(l - 1);

    // Ubah ke biner
    bin(result);

    cout << "\n";
}