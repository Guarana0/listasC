#include <stdio.h>

int main() {
	int num = 0;
	
	while (num < 100) {
		printf("Digite um numero ");
		scanf("%d", &num);
	}	
	printf("O numero e maior que 100");
	
	return 0;
}