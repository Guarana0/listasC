#include <stdio.h>

int main() {
    int num, soma = 0;
    int i = 0;

    printf("Digite um numero: ");

    while (1) {
        scanf("%d", &num);
        if (num % 2 == 0) break;
        soma += num;
        i++;
    }

    int dobro_soma = 2 * soma;

    if (dobro_soma < 100) {
        printf("O dobro da soma dos numeros digitados e menor que 100.");
    } else if (dobro_soma > 500) {
        printf("O dobro da soma dos numeros digitados e maior que 500.");
    } else {
        printf("O dobro da soma dos numeros digitados está entre 100 e 500.");
    }

    printf("\n Soma dos numeros digitados: %d", soma);
    printf("\n Dobro da soma: %d", dobro_soma);

    return 0;
}