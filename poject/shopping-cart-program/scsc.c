#include <stdio.h>
#include <inttypes.h>

int main() {
    char item[50] = "";
    float price = 0.0f;
    int quantity = 0;
    float total = 0.0f;

    printf("apa yang kamu beli: ");
    fgets(item, sizeof(item), stdin);

    printf("berapa harganya: ");
    scanf("%f", &price);

    printf("berapa jumlahnya: ");
    scanf(" %d", &quantity);

    total = price * quantity;

    printf("=====================================\n");
    printf("kamu membeli %d %sdengan total harga: %.2f\n", quantity, item, total);
    printf("=====================================\n");
    return 0;
}