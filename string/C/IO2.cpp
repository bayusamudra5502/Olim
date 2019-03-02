#include <cstring>
#include <cstdio>
#include <string>
using namespace std;

int main(){
    // INPUT CHAPTER
    int a;
    float b;
    double c;

    //scanf("%d %f %lf", &a, &b, &c); // lf = Double; Lf = Long Double
    printf("%d %.2f %.2f\n\n", a, b, c);

    char ch;
    // string cppstr;
    char cstr[50];
    char data[50];
    scanf("%c", &ch);
    // scanf("%s", cppstr); ERROR . Untuk melakukan aksi ini, lihat ../C++/IO3.cpp
    scanf("%s", cstr);

    fflush(stdin); // Mencegah membaca sebelum input (BERLAKU HANYA DI WINDOWS)
    // Di linux pake ini kawan : (Ini setara sama fflush(stdin) )
     int fls;
     while((fls = getchar()) != '\n' && fls != EOF);

    scanf("%[^\n]s", data); // sama aja sama kayak yg dibawah 
    // fgets(data,50,stdin);
    printf("%c\n%s\n%s\n", ch, cstr, data);

    int d,e;
    scanf("%d %*C %d", &d, &e); // Skip karakter yang ditengah
    printf("%d %d\n", d,e);
    return 0;
}