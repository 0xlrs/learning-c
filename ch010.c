/* Calcular média de um aluno e dizer se está aprovado */

#include <stdio.h>

double average(int quantity, double notes[quantity]);
void approval_table(double average);

int main(void) {
	int quantity = 0;

	printf("Digite a quantidade de notas necessárias: ");
	scanf("%d", &quantity);
	
	double notes[quantity];

	double my_average = average(quantity, notes);

	approval_table(my_average);

	return 0;
}

double average(int quantity, double notes[quantity]) {
	double sum = 0;

	for (int i = 0; i < quantity; i++) {
		do {
			printf("Digite a %dª nota: ", i+1);
			scanf("%lf", &notes[i]);
		} while (notes[i] < 0 || notes[i] > 10);

		sum += notes[i];
	}

	return sum / quantity;
}

void approval_table(double average) {
	printf("\nMédia: %.2f - ", average);

	if (average < 5) puts("Reprovado");
	else if (average < 7) puts("Em recuperação");
	else puts("Aprovado");
}
