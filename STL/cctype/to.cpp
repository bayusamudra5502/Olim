#include <cctype>
#include <cstring>
#include <cstdio>
using namespace std;

int main(){
    char data[50];
    char data2[50];

    strcpy(data, "Belalank");
    strcpy(data2, "KUPU-KuPU");

    for(int i = 0; i < (int) strlen(data); i++){
        data[i] = (char) toupper((int) data[i]);
    }

    printf("data : %s\n", data);

    for(int i = 0; i < (int) strlen(data2); i++){
        data2[i] = (char) tolower((int) data2[i]);
    }

    printf("data2 : %s\n", data2);
    return 0;
}