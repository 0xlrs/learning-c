/* Simulação de login com 3 tentativas */

#include <stdio.h>
#include <stdlib.h>

#define SIZE 6

int checking(char admin[], char login[]);

int main(void)
{	
	char admin[SIZE] = "lucas";
	char login[50];

	system("clear");

	for (int i = 0; i < 3; i++)
	{	
		printf("Digite o login: ");
		scanf("%49s", login);
		
		int counter = checking(admin, login);

		if (counter == SIZE-1) 
		{
			puts("Acesso concedido!\n");
			break;
		}
		else puts("Acesso negado!\n");
	}

	return 0;
}

int checking(char admin[], char login[])
{
	int counter = 0;

	for (int i = 0; i < SIZE-1; i++)
	{
		if (admin[i] == login[i]) counter++;
		else break;
	}

	return counter;
}
