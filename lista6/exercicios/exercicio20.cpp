#include <stdio.h>

int main() {
    int soma = 0, cont = 0;
    while (soma <= 567) {
        int numero;
        printf("Digite um número (maior que 10): ");
        scanf("%d", &numero);
        if (numero > 10) {
            soma += numero;
            cont++;
        } else {
            printf("Número inválido. Por favor, digite um número maior que 10.\n");
        }
    }

    printf("Foram necessários %d números para que a soma ultrapassasse 567.\n", cont);

    return 0;
}