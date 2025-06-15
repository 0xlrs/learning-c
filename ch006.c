/* Calcular o fatorial de um número N */

#include <stdio.h>

int fatorial(int valor);

int main(void) {
	printf("%d!: %d\n", 0, fatorial(0));
	printf("%d!: %d\n", 1, fatorial(1));
	printf("%d!: %d\n", 5, fatorial(5));

	return 0;
}

int fatorial(int valor) {
	if (valor < 0) return 0;

	int resultado = 1;

	for (int i = 2; i <= valor; i++) {
		resultado *= i;
	}

	return resultado;
}
