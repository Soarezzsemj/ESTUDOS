#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	float m;
	
	printf("insira a nota: \n ");
	scanf("%f", &m);
	
	if(m >= 7.0 ){
		
		printf("aprovado(a)! \n");
	}
	
	return 0;
}
