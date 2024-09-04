#include <stdio.h>

int main() {
    int cont, vezes = 0;

    printf("Quantas vezes voce quer que a frase apareca: ");
    scanf("%d", &cont);

    for (int i = 0; i < cont; i++) {
        printf("\n A disciplina de algoritimos e mamao com acucar");
    }
    printf("\n Voce imprimiu %d vezes", &cont);

    return 0;
}