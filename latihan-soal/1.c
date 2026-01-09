#include <stdio.h>

int main() {
    int jumlah_barang = 0;
    float harga_satuan = 0.0f;
    float total_harga = 0.0f;

    scanf("%d %f", &jumlah_barang, &harga_satuan);

    total_harga = jumlah_barang * harga_satuan;

    printf("%.2f\n", total_harga);
    return 0;
}   