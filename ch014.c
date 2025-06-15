/* Conversor de moedas com menu de opções */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void menu(double money);

int main(void)
{	
	double bank_balance = 0.0;
	double real_to_dollars = 0.0;
	double real_to_euro = 0.0;
	bool is_running = true;

	system("clear");
	
	while (is_running)
	{	
		menu(bank_balance);
		
		int menu_option = 0;
		printf("Escolha uma opção: ");
		scanf("%d", &menu_option);

		switch(menu_option) 
		{
			case 1:
				real_to_dollars = bank_balance / 5.70;
				system("clear");
				puts("===================");
				printf("Conversão: $%.2f\n", real_to_dollars);
				break;
			case 2:
				real_to_euro = bank_balance / 6.50;
				system("clear");
				puts("===================");
				printf("Conversão: €%.2f\n", real_to_euro);
				break;
			case 3:	
				system("clear");
				menu(bank_balance);
				printf("Digite seu saldo: R$");
				scanf("%lf", &bank_balance);
				system("clear");
				break;
			case 4:
				system("clear");
				puts("Saindo...");
				is_running = false;
				break;
			default:
				system("clear");
				puts("Opção inválida...");
				break;
		}
	}

	return 0;
}

void menu(double money)
{	
	puts("===================");
	puts("CONVERSOR DE MOEDAS");
	puts("===================");
	puts("[1] REAL PARA DÓLAR");
	puts("[2] REAL PARA EURO");
	puts("[3] ALTERAR SALDO");
	puts("[4] SAIR");
	puts("===================");
	printf("Saldo: R$%.2f\n", money);
	puts("===================");
}
