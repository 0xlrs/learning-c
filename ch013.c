/* Jogo de adivinhação (com número secreto e tentativas limitadas) */

#include <stdio.h>
#include <stdlib.h>

int get_limits(void);
void game(int secret_number, int limits);

int main()
{
	int secret = 9;
	int my_limits = get_limits();
	game(secret, my_limits);	

	return 0;
}

int get_limits(void)
{
	int limits = 0;
	int valid_input = 0;
	
	system("clear");

	do
	{
		printf("digite a quantidade de tentativas: ");
		valid_input = scanf("%d", &limits);

		if (valid_input != 1) while (getchar() != '\n');
	} while (valid_input != 1 || limits < 1);

	return limits;
}

void game(int secret_number, int limits)
{	
	int player_number = 0;

	for (int i = 0; i < limits; i++)
	{
		printf("adivinhe o número: ");
		scanf("%d", &player_number);

		if (player_number == secret_number) break; 
		else printf("\nnúmero inválido, tentativas restantes: %d\n", (limits-1)-i); 
	}

	system("clear");

	if (player_number == secret_number) puts("parabéns, você acertou!");
	else puts("não foi dessa vez, mais sorte na próxima!");
}
