#include <stdio.h>

int main() {
    int num, soma, cont;
    float media;


    for (int i = 0; i < 5; i++) {
        printf("\n Digite um numero ");
        scanf("%d", &num);

        if (num % 2 == 0) {
            printf("\n Seu numero e par");
            soma += num;
            cont++;
        }
    }
    if (cont > 0) {
        media = soma / cont;
        printf("A média dos números pares é: %.2f\n", media);
    } else {
        printf("Não foram digitados números pares.\n");
    }


    return 0;
}