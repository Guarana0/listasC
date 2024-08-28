#include <stdio.h>

int main() {
    int num, soma;

    for (num = 0; num < 125; num++) {
        printf("Digite um numero: ");
        scanf("%d", &num);
        soma += num;

    }
    printf("Soma e %d", soma);

    return 0;
}