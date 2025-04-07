#include <stdio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main() {
	
	int idade = 0; // int é um identificador 
	float peso = 0.0;
	
	printf("Digite uma idade: \n");
	scanf("%d", &idade);
	
		printf("Digite seu peso: \n");
	scanf("%f", &peso);
	
	printf("Idade informada: %d. \n", idade);	
	printf("Peso informado: %f. \n", peso);
	return 0;
}
