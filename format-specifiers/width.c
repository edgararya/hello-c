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

    //width

    int num1 = 1;
    int num2 = 10;
    int num3 = 100;

    printf("%d\n", num1);             // width of 5
    printf("%.2d\n", num2);             // width of 5
    printf("%.3d\n", num3);             // width of 5

    printf("%5d\n", num1);             // width of 5
    printf("%5d\n", num2);             // width of 5
    printf("%5d\n", num3);             // width of 5

    printf("%-4d\n", num1);             // width of 5
    printf("%-4d\n", num2);             // width of 5
    printf("%-4d\n", num3);             // width of 5

    printf("\n");
    printf("%03d\n", num1);            // width of 5
    printf("%03d\n", num2);             // width of 5
    printf("%03d\n", num3);             // width of 5

    printf("\n");
    printf("%+d\n", num1);            // width of 5
    printf("%+d\n", num2);             // width of 5
    printf("%+d\n", num3);             // width of 5

    return 0;
}