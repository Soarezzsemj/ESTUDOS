#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int A, B, soma, subtr, mult, divis;
	
	printf("digite o primeiro valor:\n");
	scanf("%d", &A);
	printf("digite o segundo valor:\n");
	scanf("%d", &B);
	
	soma = A + B;
	subtr = A - B;
	mult = A * B;
	divis = A / B;
	
	printf("resultados:\n");
	printf("soma: %d.\n", soma);
	printf("Subtra.:%d.\n",subtr);
	printf("Multilic.: %d.\n", mult);
	printf("Divis.: %d.\n", divis);
	
	
	return 0;
}
