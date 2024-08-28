#include <stdio.h>

int main(int argc, char** argv) {
	char nome[50];
	int idade, cont;

	printf("Digite seu nome: ");
	scanf("%s", nome);
	printf("Digite sua idade: ");
	scanf("%d", &idade);
	printf("Quantas vezes voce quer fazer isso? ");
	scanf("%d", &cont);

	for(int i = 0; i < cont; i++) {
		printf("Nome: %s, Idade: %d\n", nome, idade);
	}

	return 0;
}
