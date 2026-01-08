#include <stdio.h>

int main() {
    
    int age = 0;
    float gpa = 0.0f;
    char grade = '\0';
    char name[30] = "";

    printf("enter your age: ");
    scanf("%d", &age);

    printf("enter your gpa: ");
    scanf("%f", &gpa);

    printf("enter your grade: ");
    scanf(" %c", &grade);
     
    printf("enter your name: ");
    scanf("%s", name);


    printf("%d\n", age);
    printf("%.2f\n", gpa);
    printf("%c\n", grade);
    printf("%s\n", name);
    return 0;
}