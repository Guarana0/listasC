#include <stdio.h>

int main() {
    int num;

    while (1) {
        printf("Digite um numero: ");
        scanf("%d", &num);
        if (num < 1) {
            break;
        }
        if (num % 2 == 0) {
            int quadrado = num * num;
            printf("O quadrado de %d e %d\n", num, quadrado);
        } else {
            printf("%d e impar, nao sera calculado o quadrado.\n", num);
        }
    }

    return 0;
}
