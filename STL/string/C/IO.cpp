#include <cstring>
#include <cstdio>
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int ao = -123;
    float bo = 123.456789;
    double co = 2 * acos(0); // PI

    // OUTPUT CHAPTER
    // INTEGER
    printf("%d\n", ao); // Normal Integer Output (O: -123)
    printf("%.5d\n", -ao); // Integer Output (O: 00123)
    printf("%5d\n", -ao); // Integer Output (O: _ _123) NB: _ = Space
    printf("%u\n" , ao); // Unsigned Output (O: 4294967173)
    printf("%o\n", ao); // Octal Output (O: 37777777605)
    printf("%X\n", ao); // Hexadecimal Output (O : FFFFFF85)
    printf("%x\n\n", ao); // Hexadecimal Output (Lowercase) (O: ffffff85)

    // Float
    printf("%f\n", bo); // FLoating point
    printf("%.2f\n",bo); //Floating point precision 2 number behind comma
    printf("%e\n", bo); // Show as exponential notation
    printf("%E\n", co); // Show as exponential notation (UPPERCASE)
    printf("%.2e\n",co); // Exponential notation with precision
    printf("%g\n", co); // Which is better? %f or %e.
    printf("%.3g\n\n", co); // With Precision.

    // Text
    char n = 'a';
    char* str = (char*) "Hai Tayo.. Hai Tayo..";
    printf("%C\n", n); // Print Character (With upper C in format)

    printf("%C\n", *str); // Gaya Bahasa C
    cout << *str << endl; // Sama kayak baris 36 (Gaya Bahasa C++) -- Slower

    printf("%s\n", str); // Setara sama baris 40
    cout << str << endl; // Gaya C++ -- Slower

    printf("%.3s\n\n", str); // Show only 3 characters.
    //Flags
    int x = 12;
    float y = 12.0;
    printf("%5d\n",x); // SEE THE DIFFERENT
    printf("%-5d\n", x); // Justify Left
    printf("%+d\n", x); // Give + if positive
    printf("% d\n", x); // if there's no sign, give space
    printf("%x\n", x); 
    printf("%#x\n", x);// Use 0x while printing hexadecimal
    printf("%o\n", x);
    printf("%#o\n", x); // Use 0 while printing octal
    printf("%.0f\n",y);
    printf("%#.0f\n", y); //Show point.
    return 0;
}