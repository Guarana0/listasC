#include <stdio.h>

int main() {
    int numeros[211];
    int soma = 0;

    for (int i = 0; i < 10; i++) {
        int numero;
        while (1) {
            printf("Digite o número %d (maior que 10): ", i + 1);
            scanf("%d", &numero);
            if (numero > 10) {
                numeros[i] = numero;
                soma += numero;
                break;
            } else {
                printf("Número inválido. Por favor, digite um número maior que 10.\n");
            }
        }
    }

    printf("A soma dos números é: %d\n", soma);

    return 0;
}