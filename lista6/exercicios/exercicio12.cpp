#include <stdio.h>

int main() {
    int num, maior, menor;
    printf("Digite o 1 número: ");
    scanf("%d", &num);

    maior = menor = num;

    for (int i = 0; i < 11; i++) {
        printf("Digite um numero ");
        scanf("%d", &num);

        if (num > maior) {
            maior = num;
        }

        if (num > menor) {
            menor = num;
        }
    }
    printf("O maior numero digitado foi: %d\n", maior);
    printf("O menor numero digitado foi: %d\n", menor);

    return 0;
}
