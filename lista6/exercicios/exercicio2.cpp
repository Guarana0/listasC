#include <stdio.h>

int main() {
	int num, soma;
	
	while (num != 0) {
		printf("\n Digite um numero ");
		scanf("%d", &num);
		soma += num;
		printf("\nA soma vale %.2d", soma);
	}	
	printf("\nVoce digitou um zero");
	
	return 0;
}
