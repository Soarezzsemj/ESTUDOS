#include <stdio.h>
#include <stdlib.h>

#define inicio "DADO INICIAL 10"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	printf("%s\n", inicio);
	
	int dado = 10;
	printf("dado antes do incremento: %d. \n", dado);
	
	dado++;
	printf("dado depois do incremento: %d. \n", dado);
	
	dado--;
	printf("dado depois do incremento: %d. \n", dado);
	
	dado += 3;
	printf("depois do incremento em 3 unidades: %d. \n", dado);
	
	dado -= 2;
	printf("depois do decremento em 2 unidades: %d. \n", dado);
	
	dado *= 10;
	printf("depois de multiplicar por 10: %d. \n", dado);
	
	dado /= 2;
	printf("depois de dividir por 2: %d. \n", dado);
	
	return 0;
}
