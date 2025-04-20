#include <stdio.h>
#include <stdlib.h>
int main() {

	int base;
	int altura;
	int area;
	
	base=0;
	altura=0;
	
	
	printf("DIGITE A BASE (NAO COLOCA NUMERO COM VIRGULA OU PONTO BELE?): \n");
	scanf("%d", &base);
	
	printf("DIGITE A ALTURA: \n");
	scanf("%d", &altura);
	
	area = base * altura;
	
	printf("AREA: %d \n", area );
	
	
	
	
	system("pause");

    return 0;
}


