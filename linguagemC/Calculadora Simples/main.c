#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int num1;
	int num2;

	num1=0;
	num2=0;

	char operacao;

    printf("Digite o Primeiro numero:\n");
	scanf("%d", &num1);
	
	printf("Digite o Segundo numero:\n");
	scanf("%d", &num2);


	printf("Escolha a operacao (+, -, *, /): ");
    operacao = getche(); // Lê o caractere e já mostra na tela

    printf("\nVoce escolheu: %c\n", operacao);


	
	if (operacao =='+') {
		
		printf("seu resultado: %d\n", num1 + num2);

	} else if (operacao == '-') {
		printf("seu resultado: %d\n", num1 - num2);
	} else if (operacao == '*') {
		printf("seu resultado: %d\n", num1 * num2);
	} else if (operacao == '/') {
    if (num2 != 0) {
        printf("Seu resultado: %d\n", num1 / num2);
    } else {
        printf("Erro: Divisao por zero!\n");
    }
}

	system("pause");
	
	return 0;
}
