#include <stdio.h>

int main() {
    int num = 0, media, soma;

    while (num < 130) {
        printf("\n Digite um numero: ");
        scanf("%d", &num);
        soma += num;
        media /= soma;
        printf("A soma e %d e a media e %d", soma, media);
    }
    return 0;
}