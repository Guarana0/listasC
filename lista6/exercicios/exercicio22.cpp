#include <stdio.h>

int main() {
    int vezes;

    printf("Digite o numero de mutiplos que voce deseja ");
    scanf("%d", &vezes);

    for (int i = 0; i < vezes; i++) {
        int multiplo = 3 * (i + 1);
        printf("\n Os mutiplo e : %d", multiplo);
    }
    printf("\n");

    return 0;
}