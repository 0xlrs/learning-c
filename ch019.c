/* Contar quantos números pares existem em um vetor */

#include <stdio.h>

int total_pairs(int vector_size);

int main(void) {
	int tot = total_pairs(8);

	puts("...");
	printf("Quantidade de números pares cadastrados: %d\n", tot);

	return 0;
}

int total_pairs(int vector_size) {
	int my_vector[vector_size];
	int result = 0;

	for (int i = 0; i < vector_size; i++) {
		printf("%dº valor: ", i+1);
		scanf("%d", &my_vector[i]);

		if (my_vector[i] % 2 == 0) result++;
	}

	return result;
}
