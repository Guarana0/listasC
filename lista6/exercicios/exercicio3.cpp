#include <stdio.h>

int main() {
    int num = 0, div;

    while (num >= 0) {
        printf("\n Digite um numero: ");
        scanf("%d", &num);
        div = num / 2;
        printf("A divisao de %.2d e %d", num, div);
    }
    return 0;
}