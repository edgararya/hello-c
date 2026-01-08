#include <stdio.h>
#include <float.h>

int main() {
    // Demonstrating precision specifiers in C
    float price1 = 19.99;
    float price2 = 1.50;
    float price3 = -100.00;

    printf("%f\n", price1);  // One decimal place
    printf("%f\n", price2);  // Two decimal places
    printf("%f\n", price3);  // Three decimal places

    printf("\n");
    printf("%.2f\n", price1);  // One decimal place
    printf("%.2f\n", price2);  // Two decimal places
    printf("%.2f\n", price3);  // Three decimal places
    return 0;
}