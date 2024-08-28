#include <stdio.h>

int main(int argc, char** argv) {
	float barra, pedacos, resto;
	
	while (barra > pedacos) {
		printf("Qual o tamanho da barra?");
		scanf("%f", &barra);
		pedacos = barra / 3.5;
		resto = barra - pedacos;
	}
	printf("Voce dividiu a barra em %f", pedacos);
	printf("Sobrou %f da barra", resto);
	
	return 0;
}
