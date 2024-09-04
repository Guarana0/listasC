#include <stdio.h>

int main() {
    int num, soma, media, cont = 0;

    do {
        printf("Digite um numero ");
        scanf("%d", &num);

        cont++;
        soma += num;
        media = soma / cont;
    } while (num % 3 != 0); {
        printf("A soma e %d e a media e %d", soma, media);
    }

    return 0;
}