#include <stdio.h>

#define texto "teste começo." // começo do sistma

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	printf("%s\n", texto);
	
	int idade = 0;
	float altura = 0.0;
	char nome[50] = "";
	
	printf("digite sua idade:\n");
	scanf("%d", &idade);
	
	printf("digite a altura:\n");
	scanf("%f", &altura);
	
	printf("digite o nome:\n");
	scanf("%s", nome);
	
	printf("DADOS INFORMADOS:\n");
	printf("Idade: %d.\n", idade);
	printf("Altura: %.2f.\n", altura);
	printf("Nome: %s.\n", nome);
	
	return 0;
}
