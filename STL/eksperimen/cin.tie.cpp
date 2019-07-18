#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    char str[1000];
    char str2[1000];

    strcpy(str, "hahahaah");
    strcpy(str2, "hahahaah");

    if (strcmp(str, str2) == 0)
    {
        cout << "Belalang";
    }
    else
    {
        cout << "Kucing";
    }
}