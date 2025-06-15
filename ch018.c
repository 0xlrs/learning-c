/* REFAZER DEPOIS QUE APRENDER BUBBLE SORT
 * Desafio - Vetores e Análises de números */

#include <stdio.h>

int main(void) {
	int range = 0;
	int valid_input = 0;

	do {
		printf("Quantidade de valores que serão cadastrados: ");
		valid_input = scanf("%d", &range);

		if (valid_input != 1) {
			puts("[ERRO] Input inválido");
			while (getchar() != '\n');
		} else if (range < 0) puts("[ERRO] Valor negativo");
	} while (valid_input != 1 || range < 0);
	
	int vector[range];
	int sum_pairs = 0;
	int mirror = 0;
	int repeated = 0;
	int bigger = 0;
	
	for (int i = 0; i < range; i++) {
		printf("Digite o %dº valor: ", i+1);
		scanf("%d", &vector[i]);
		
		// REFATORAR ESSE IF ANINHADO
		if (i == 0) {
			mirror = vector[i];
			bigger = vector[i];
		}
		else {
			if (vector[i] == mirror) repeated++;
			else {
				mirror = vector[i];
			}
		}

		if (vector[i] > bigger) bigger = vector[i];
		if (vector[i] % 2 == 0) sum_pairs +=  vector[i];
	}

	bigger += 1;
	int new_vector[bigger];
	
	for (int i = 0; i < bigger; i++) {
		new_vector[i] = 0;
	}
	
	for (int i = 0; i < range; i++) {
		new_vector[vector[i]]++;
	}

	printf("\nA) A soma dos números pares: %d\n", sum_pairs);
	printf("\nB) A quantidade de números repetidos: %d\n", repeated);
	puts("\nC) A quantidade de repetições de cada número:");

	for (int i = 0; i < bigger; i++) {
		if (new_vector[i] == 0) continue;
		printf("Valor: %d - Repetições: %d\n", i, new_vector[i]);
	}

	puts("\nD) O vetor com os números sem repetições:");

	for (int i = 0; i < range; i++) {
		if (i == 0 || vector[i] != vector[i-1]) {
			printf("%dº valor: %d\n", i+1, vector[i]);
		}
	}
	
	return 0;
}
