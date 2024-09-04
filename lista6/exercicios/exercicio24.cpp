#include <stdio.h>

int main() {
    int manifestantes, soldados;

    printf("Digite a quantidade esperada de manifestantes: ");
    scanf("%d", &manifestantes);

    soldados = manifestantes / 1054;
    if (manifestantes % 1054 > 0) {
        soldados++;
    }

    printf("Soldados necessários: %d\n", soldados);

    return 0;
}