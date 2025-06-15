#include <stdio.h>
#include "notes_calculator.h"

int get_total(void)
{
	int total = 0;
	int valid_input = 0;

	do
	{
		printf("Digite a quantidade de notas cadastradas: ");
		valid_input = scanf("%d", &total);

		if (valid_input != 1) 
			while (getchar() != '\n');

	} while (valid_input != 1 || total < 1);

	return total;
}

double get_average(int total)
{
	double notes[total];
	double sum = 0.0;
	int valid_input = 0;

	for (int i = 0; i < total; i++)
	{
		do
		{
			printf("Digite a %dª nota: ", i+1);
			valid_input = scanf("%lf", &notes[i]);

			if (valid_input != 1)
			{
				puts("\n[ERRO] Input inválido...");
				while (getchar() != '\n');
			}

			else if (notes[i] < 0 || notes[i] > 10)
				puts("\n[ERRO] Apenas valores entre 0 e 10 são aceitos!");
		
		} while (valid_input != 1 || notes[i] < 0 || notes[i] > 10);

		sum += notes[i];
	}
	
	// antes estava como average = sum / total;
	// mas nem seria necessário essa variável
	// pois já retorna um valor double que será colocado em uma variável externa
	
	return sum / total;
}

void classify_student(double average)
{
	printf("\nMédia do aluno: %.2f\n", average);
	printf("Classificação do aluno: ");

	if (average >= 0 && average < 5) puts("REPROVADO!");
	else if (average < 7) puts("EM RECUPERAÇÃO!");
	else puts("APROVADO");
}
