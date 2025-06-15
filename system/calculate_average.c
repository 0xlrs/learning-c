#include <stdio.h>
#include "calculate_average.h"
#include "reports.h"

int students(void)
{
	int total_of_students = 0;
	int valid_input = 0;

	do
	{
		printf("Digite a quantidade total de alunos cadastrados: ");
		valid_input = scanf("%d", &total_of_students);

		if (valid_input != 1)
			while (getchar() != '\n');
	
	} while (valid_input != 1 || total_of_students < 1 || total_of_students > 100);

	return total_of_students;
}

void calculate_averages(int students)
{	
	int const exams = 3;
	int valid_input = 0;
	double all_notes[students][exams];
	double students_average[students];
	double general_average = 0.0;
	double highest_average = 0.0;
	double lowest_average = 0.0;
	
	// CADASTRANDO AS NOTAS DOS ALUNOS
	for (int i = 0; i < students; i++)
	{
		double sum = 0.0;

		printf("%dº ALUNO:\n\n", i+1);

		for (int j = 0; j < exams; j++)
		{	
			do 
			{
				printf("%dª NOTA: ", j+1);
				valid_input = scanf("%lf", &all_notes[i][j]);
				
				if (valid_input != 1)
				{
					puts("\n[ERRO] Input inválido...");
					while (getchar() != '\n');
				}

				else if (all_notes[i][j] < 0 || all_notes[i][j] > 10)
				{
					puts("\n[ERRO] Intervalo de notas aceito é entre 0 e 10...");
				}

			} while (valid_input != 1 || all_notes[i][j] < 0 || all_notes[i][j] > 10);

			sum += all_notes[i][j];
		}
		printf("\n");
		students_average[i] = sum / exams;
	}
	
	// CAPTURANDO A MÉDIA GERAL, MAIOR E MENOR MÉDIA
	for (int i = 0; i < students; i++)
	{	
		// MAIOR E MENOR
		if (i == 0) 
		{
			highest_average = students_average[i];
			lowest_average = students_average[i];
		}

		if (students_average[i] > highest_average)
			highest_average = students_average[i];

		if (students_average[i] < lowest_average)
			lowest_average = students_average[i];

		// VALORES PARA MÉDIA GERAL
		general_average += students_average[i];
	}

	general_average /= students;
	
	// ENVIANDO OS DADOS PARA A FUNÇÃO CLASSIFY_STUDENTS
	classify_students(students, students_average, general_average, highest_average, lowest_average);

}
