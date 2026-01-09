#include <stdio.h>
#include <math.h>

int main() {
    double principal = 0.0;
    double rate = 0.0;
    int years = 0;
    int times_compounded = 0;
    double total = 0.0;
    
    printf("Kalkulator Bunga Majemuk\n");

    printf("masukkan pokok (p): ");
    scanf("%lf", &principal);

    printf("masukkan suku bunga %% (r): ");
    scanf("%lf", &rate);

    printf("masukkan jumlah tahun (t): ");
    scanf("%d", &years);

    printf("masukkan frekuensi penggabungan per tahun (n): ");
    scanf("%d", &times_compounded);

    total = principal * pow((1 + rate / times_compounded), times_compounded * years);

    
    printf("setelah %d tahun, total akan menjadi Rp%.2f\n", years, total);
    return 0;
}