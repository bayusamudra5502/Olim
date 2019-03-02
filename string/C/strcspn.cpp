#include <bits/stdc++.h>
using namespace std;

int main(){
    char keys[] = "1234567890";
    char str1[] = "bayusamudra5502";
    char str2[] = "5060Kunink";

    printf("str1 \nstrcspn: %d\nstrspn : %d\n\n",
            strcspn(str1,keys),strspn(str1,keys));
    printf("str2 strcspn: %d\nstrspn : %d\n",
            strcspn(str2,keys),strspn(str2,keys));

    // STRCSPN = Untuk nyari indeks karakter pertama yg ada di keys
    // STRSPN = Untuk nyari indeks karakter pertama yg gaada di keys
    return 0;
}