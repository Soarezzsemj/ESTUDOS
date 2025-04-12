#include <stdio.h>
#include <stdlib.h>
int main() {
	
	int num1;
	int num2;
	int soma;
	
	num1=0;
	num2=0;
	
	printf("Digite o Primeiro numero:\n");
	scanf("%d", &num1);
	
	printf("Digite o Segundo numero:\n");
	scanf("%d", &num2);
	
	soma= num1 + num2;
	
	printf("resultado da soma dos dois numeros: %.d \n", soma);
	
	system("pause");
	
	return 0;
}


