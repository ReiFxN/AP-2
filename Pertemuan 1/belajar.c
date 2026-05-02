#include <stdio.h>

int main() {
    char nama[50];
    char kom;
    int nim;
    float ipk;

    printf("Hello, World!\n");

    printf("Masukkan Nama: ");
    fgets(nama, sizeof(nama), stdin);
    printf("Masukkan Kom: ");
    scanf("%c", &kom);
    printf("Masukkan NIM: ");
    scanf("%d", &nim);
    printf("Masukkan IPK: ");
    scanf("%f", &ipk);

    printf("\nNama: %s", nama);
    printf("Kom: %c\n", kom);
    printf("NIM: %d\n", nim);
    printf("IPK: %.2f\n", ipk);

    return 0;
}