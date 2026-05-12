#include <stdio.h>

int main() {
    int i;

    printf("Movimento do Bispo:\n");
    i = 0;
    while (i < 5) {
        printf("Cima\n");
        printf("Direita\n");
        i++;
    }

    printf("\nMovimento da Torre:\n");
    for (i = 0; i < 5; i++) {
        printf("Direita\n");
    }

    printf("\nMovimento da Rainha:\n");
    i = 0;
    do {
        printf("Esquerda\n");
        i++;
    } while (i < 8);

    return 0;
}
