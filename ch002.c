/* Verificar se um número é par ou ímpar */

#include <stdio.h>

#define RANGE 3

void even_or_odd(int a);

int main(void) {
	int values[RANGE];
	
	for (int i = 0; i < RANGE; i++) {
		printf("Digite o %dº valor: ", i+1);
		scanf("%d", &values[i]);
	}
	
	puts("...");

	for (int i = 0; i < RANGE; i++) {
		even_or_odd(values[i]);
	}

	return 0;
}

void even_or_odd(int a) {
	if (a % 2 == 0) printf("O número %d é PAR!\n", a);
	else printf("O número %d é ÍMPAR!\n", a);
}	

