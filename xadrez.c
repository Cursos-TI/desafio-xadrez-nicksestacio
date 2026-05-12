#include <stdio.h>

int main() {

    int i, j;

    printf("Movimento do Cavalo:\n");

    for(i = 0; i < 2; i++) {
        printf("Baixo\n");

        while(i == 1) {
            for(j = 0; j < 1; j++) {
                printf("Esquerda\n");
            }
            break;
        }
    }

    return 0;
}
