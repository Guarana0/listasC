#include <stdio.h>

int main() {
    int numeros[211];
    int i;
    float media = 0;

    printf("Digite 211 números:\n");

    for (i = 0; i < 211; i++) {
        scanf("%d", &numeros[i]);
        media += numeros[i];
    }

    media /= 211;

    if (media > 10) {
        printf("A média é maior que 10.\n");
    } else if (media < 10) {
        printf("A média é menor que 10.\n");
    } else {
        printf("A média é igual a 10.\n");
    }

    return 0;
}