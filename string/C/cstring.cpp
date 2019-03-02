#include <cstring>
#include <cstdio>
using namespace std;

int main(){
    char str1[50];
    char *str2;

    // str1 = "Ayam Belang"; (ERROR!! TYPE MISMATCH)
    printf("Function Output : %s\n", strcpy(str1,"Kuciang"));
    str2 = (char*) "Kucingk";
    printf("%s\n%s", str1, str2);
    return 0;
}