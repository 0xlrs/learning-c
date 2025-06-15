/* Encontrar o maior e o menor número em um vetor */

#include <stdio.h>

void bigger_and_smaller(int quantity, int values[quantity]);

int main(void) {
	int quantity = 0;

	printf("Digite o tamanho do vetor: ");
	scanf("%d", &quantity);

	int values[quantity];

	bigger_and_smaller(quantity, values);

	return 0;
}

void bigger_and_smaller(int quantity, int values[quantity]) {
	int bigger = 0;
	int smaller = 0;

	for (int i = 0; i < quantity; i++) {
		printf("%dº valor: ", i+1);
		scanf("%d", &values[i]);
	
		if (i == 0) {
			bigger = values[i];
			smaller = values[i];
		}

		if (values[i] > bigger) bigger = values[i];
		if (values[i] < smaller) smaller = values[i];
	}
	
	puts("...");
	printf("Maior valor: %d\n", bigger);
	printf("Menor valor: %d\n", smaller);
}
