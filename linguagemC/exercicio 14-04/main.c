#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float nota;

	printf("insira sua nota:\n");
	scanf("%f", &nota);
	
	if (nota >= 9 && nota <= 10) {
        printf("Excelente!\n");
    }
    else if (nota >= 7) {
        printf("Bom\n");
    }
    else if (nota >= 5) {
        printf("Regular\n");
    }
    else if (nota <= 4) {
        printf("Ruim\n");
    }
	 else {
        printf("Nota inválida!\n");
    }
	
	system("pause");
	
	
	return 0;
}
