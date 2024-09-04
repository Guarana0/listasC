#include <stdio.h>

int main() {
    float base_maior, base_menor, altura, area, valor_lote;

    printf("Digite o valor da base menor do lote em metros: ");
    scanf("%f", &base_menor);
    printf("Digite o valor da base maior do lote em metros: ");
    scanf("%f", &base_maior);
    printf("Digite o valor da altura do lote em metros: ");
    scanf("%f", &altura);

    area = (base_maior + base_menor) * altura / 2.0
    valor_lote = area * 22.0;

    printf("O valor do lote é R$ %.2f\n", valor_lote);

    return 0;
}