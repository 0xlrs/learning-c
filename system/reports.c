#include <stdio.h>
#include "reports.h"

void classify_students(int students, double students_avg[], double general_avg, double highest_avg, double lowest_avg)
{
	int approved = 0;
	int in_recovery = 0;
	int failed = 0;
	
	// CLASSIFICANDO ALUNOS
	for (int i = 0; i < students; i++)
	{
		printf("%dº ALUNO: ", i+1);

		if (students_avg[i] >= 0 && students_avg[i] < 5)
		{
			puts("REPROVADO!");
			failed++;
		}

		else if (students_avg[i] < 7)
		{
			puts("EM RECUPERAÇÃO!");
			in_recovery++;
		}

		else
		{
			puts("APROVADO!");
			approved++;
		}
	}
	
	// ENVIANDO DADOS PARA O RELATÓRIO GERAL
	general_report(approved, in_recovery, failed, general_avg, highest_avg, lowest_avg);

}

void general_report(int approved, int in_recovery, int failed, double general_avg, double highest_avg, double lowest_avg)
{
	puts("\nRELATÓRIO GERAL:");
	printf("Total de alunos aprovados: %d\n", approved);
	printf("Total de alunos em recuperação: %d\n", in_recovery);
	printf("Total de alunos reprovados: %d\n", failed);
	
	printf("\nMédia geral da turma: %.2f\n", general_avg);
	printf("Maior média da turma: %.2f\n", highest_avg);
	printf("Menor média da turma: %.2f\n", lowest_avg);

	puts("...");
}
