/* Armazenar uma quantidade x de notas e calcular a média */

#include <stdio.h>

double average(int quantity, double notes[quantity]);

int main(void) {
	int quantity = 0;
	
	do {
		printf("Digite a quantidade de notas: ");
		scanf("%d", &quantity);
	} while (quantity < 1);

	double notes[quantity];

	double my_average = average(quantity, notes);

	puts("...");
	printf("Média: %.2f\n", my_average);

	return 0;
}

double average(int quantity, double notes[quantity]) {
	double sum = 0.0;
	int valid_input = 0;

	for (int i = 0; i < quantity; i++) {
		do {
			printf("Digite a %dª nota: ", i+1);
			valid_input = scanf("%lf", &notes[i]);

			if (valid_input != 1) {
				puts("Input inválido, digite novamente...\n");
				while (getchar() != '\n');
			} else if (notes[i] < 0 || notes[i] > 10) {
				puts("A nota precisa estar entre 0 e 10...\n");
			}

		} while (valid_input != 1 || (notes[i] < 0 || notes[i] > 10));

		sum += notes[i];
	}

	return sum / quantity;
}
