#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int d;
	
	printf("insira um valor de 1 a 7: \n");
	scanf("%d", &d);
	
	switch(d){
		case 1:
			printf("domingo.");
			break;
		case 2:
			printf("segunda.");
			break;
		case 3:
			printf("terça.");
			break;
		case 4:
			printf("quarta.");
			break;
		case 5: 
		printf("quinta.");
			break;
		case 6:
			printf("sexta.");
			break;
		case 7:
			printf("sabado.");
			break;
		default:
			printf("nao existe.");
			break;
	}
	return 0;
}
