#include <stdio.h>

int main() {
    int vezes;

    printf("Digite quantas vezes voce quer ver a frase? ");
    scanf("%d", &vezes);

    for (int i = 0; i < vezes; i++) {
        printf("\n A prova de algoritimos esta mamao com acucar");
    }

    return 0;
}