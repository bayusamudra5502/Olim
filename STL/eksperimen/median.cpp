#include <bits/stdc++.h>
using namespace std;

int n, db[10];

int median(int low, int high)
{
    // BANYAK KECOA DISINI :v
    if (low == high)
        return db[low];

    int l = low, r = high;
    int pivot = db[(l + r) / 2];
    int tengah = (l + r) / 2;

    while (l < r)
    {
        while (db[l] < pivot)
        {
            l++;
        }

        while (db[r] > pivot)
        {
            r--;
        }

        if (l < r)
        {
            swap(db[l], db[r]);
        }
    }

    if (tengah < r)
    {
        return median(low, r);
    }
    else
    {
        return median(r + 1, high);
    }
}

int main(int argc, const char **argv)
{
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> db[i];

    cout << median(0, n - 1);
    return 0;
}