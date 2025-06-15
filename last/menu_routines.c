#include <stdio.h>
#include <stdlib.h>
#include "menu_routines.h"

int menu(void)
{
	int option = 0;

	system("clear");

	puts("====================");
	puts("CALCULADORA DE NOTAS");
	puts("[1] INICIAR");
	puts("[2] SAIR");
	puts("====================");
	
	printf("Digite uma opção acima: ");
	scanf("%d", &option);

	printf("\n");

	return option;
}

void pause(void)
{
	puts("\nPressione ENTER para limpar a tela e continuar...");
	while (getchar() != '\n');

	getchar();
}
