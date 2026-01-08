#include <stdio.h>
#include <stdbool.h>

int main() {
    // variable = A reusable container for a value.
    //            Behaves as if it were the value it contains.

    // int = whole numbers (4 bytes in modern systems)
    // float = single-precision decimal number (4 bytes)
    // double = double-precision decimal number (8 bytes)
    // char = single character (1 byte)
    // char[] = array of characters (size varies)
    // bool = true or false (1 byte, requires <stdbool.h>)

    int age = 25;
    float price = 19.99;
    double pi = 3.141592653589793;
    char currency = '$';
    char name[] = "bro edgar";

    printf("%d\n", age);               // int;
    printf("%f\n", price);             // float;
    printf("%lf\n", pi);               // double;
    printf("%c\n", currency);          // char;
    printf("%s\n", name);              // string;
    return 0;
}