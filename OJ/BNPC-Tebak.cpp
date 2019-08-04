#include <bits/stdc++.h>
using namespace std;

int main()
{
    int L = 1, R = 100;
    int arr[100];
    sort(arr, arr + 100);

    while (true)
    {

        int center = (L + R) / 2;
        cout << center << endl;

        string resp;
        getline(cin, resp);

        if (resp == "BENAR" || resp == "WRONG ANSWER")
        {
            break;
        }
        else
        {
            if (resp == "LEBIH KECIL")
            {
                R = center - 1;
            }
            else if (resp == "LEBIH BESAR")
            {
                L = center + 1;
            }
        }
    }
    return 0;
}