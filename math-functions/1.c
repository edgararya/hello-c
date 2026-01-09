#include <stdio.h>
#include <math.h>

int main() {
    
    //int x = 9;
    //float x = 3.14;
    //int x = -9;
    //float x = 5;
    float x = 45;


    //x = sqrt(x); //mengembalikan akar kuadrat dari argumen sebagai nilai bertipe double.
    //x = pow(x, 2); //pangkat
    //x = roundf(x); //pembulatan ke nilai terdekat
    //x = ceilf(x); //pembulatan ke atas
    //x = floorf(x); //pembulatan ke bawah
    //x = abs(x); //nilai absolut
    //x = log(x); //logaritma natural
    //x = sin(x); //nilai sinus dalam radian
    //x = cos(x); //nilai cosinus dalam radian
    x = tan(x); //nilai tangen dalam radian


    printf("%f", x);

    return 0;
}