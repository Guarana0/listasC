#include <stdio.h>

int main() {
    int num = 0, media, soma, cont = 0;

    while (num < 13 || num > 49) {
        cont++;
        printf("\n Digite um numero: ");
        scanf("%d", &num);
        soma += num;
        media = soma / cont;
        printf("A soma e %d e a media e %d", soma, media);
    }
    return 0;
}