#include <stdio.h>

void moverBispo(int casas) {
    if (casas > 0) {
        printf("Cima\n");
        printf("Direita\n");
        moverBispo(casas - 1);
    }
}

void moverTorre(int casas) {
    if (casas > 0) {
        printf("Direita\n");
        moverTorre(casas - 1);
    }
}

void moverRainha(int casas) {
    if (casas > 0) {
        printf("Esquerda\n");
        moverRainha(casas - 1);
    }
}

int main() {
    int i, j;

    printf("Movimento do Bispo:\n");
    moverBispo(5);

    printf("\nMovimento da Torre:\n");
    moverTorre(5);

    printf("\nMovimento da Rainha:\n");
    moverRainha(8);

    printf("\nMovimento do Cavalo:\n");

    for (i = 0, j = 0; i < 2 || j < 1; ) {
        if (i < 2) {
            printf("Cima\n");
            i++;
            continue;
        }

        if (j < 1) {
            printf("Direita\n");
            j++;
            break;
        }
    }

    return 0;
}
