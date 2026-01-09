#include <stdio.h>
#include <string.h>

int main() {
    char noun[50] = "";
    char verb[50] = "";
    char adjective1[50] = "";
    char adjective2[50] = "";
    char adjective3[50] = "";

    printf("Masukkan sebuah kata benda (noun): ");
    fgets(noun, sizeof(noun), stdin);
    noun[strlen(noun) - 1] = '\0'; // Remove newline character

    printf("Masukkan sebuah kata kerja (verb): ");
    fgets(verb, sizeof(verb), stdin);
    verb[strlen(verb) - 1] = '\0'; // Remove newline character

    printf("Masukkan kata sifat pertama (adjective): ");
    fgets(adjective1, sizeof(adjective1), stdin);
    adjective1[strlen(adjective1) - 1] = '\0'; // Remove newline character

    printf("Masukkan kata sifat kedua (adjective): ");
    fgets(adjective2, sizeof(adjective2), stdin);
    adjective2[strlen(adjective2) - 1] = '\0'; // Remove newline character

    printf("Masukkan kata sifat ketiga (adjective): ");
    fgets(adjective3, sizeof(adjective3), stdin);
    adjective3[strlen(adjective3) - 1] = '\0'; // Remove newline character

    printf("\n=== Cerita Mad Libs Kamu ===\n");
    printf("Pada suatu hari, ada sebuah %s\n", noun);
    printf("yang sangat %s dan suka %s.\n", adjective1, verb);
    printf("Temannya juga %s dan %s.\n", adjective2, adjective3);
    
    return 0;
}