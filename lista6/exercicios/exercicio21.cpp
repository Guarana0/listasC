#include <stdio.h>

int main() {
    int num, par, impar;

    if (num % 2 == 0) {
        num = par;
    } else {
        num = impar;
    }

    do {
        printf("Digite um numero ");
        scanf("%d", &num);
    } while (num == impar && num < 19); {
        printf("A disciplina de Algoritimos e logica de programacao esta muito facil, mamao com acucar");
    }

    return 0;
}