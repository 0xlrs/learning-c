/* Imprimir sequência de Fibonacci até N */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void menu(void);
void fibonacci_with_terms(int value);
void fibonacci_to_n(int value);

int main(void) {
	int option = 0;
	int terms = 0;
	int end_value = 0;
	bool is_running = true;
	
	menu();

	while (is_running) {
		printf("\nDigite uma opção acima: ");
		scanf("%d", &option);
		
		switch (option) {
			case 1:
				printf("\nDigite a quantidade de termos desejada: ");
				scanf("%d", &terms);
				
				menu();

				printf("\n[ ");	
				fibonacci_with_terms(terms);
				printf("]\n");
				
				break;
			case 2:
				printf("\nDigite o número desejado: ");
				scanf("%d", &end_value);
				
				menu();

				printf("\n[ ");
				fibonacci_to_n(end_value);
				printf("]\n");
				break;
			case 3:
				menu();
				break;
			case 4:
				is_running = false;
				system("clear");
				puts("\nBye!");
				break;
			default:
				menu();
				puts("\nOpção inválida, digite novamente...");
				break;
		}
	}

	return 0;
}

void menu(void) {
	system("clear");

	puts("\n=======================");
	puts("   F I B O N A C C I   ");
	puts("[1] SEQUÊNCIA DE TERMOS");
	puts("[2] ATÉ NÚMERO X");
	puts("[3] LIMPAR TELA");
	puts("[4] SAIR");
	puts("=======================");
}

void fibonacci_with_terms(int value) {
	int a = 0;
	int b = 1;

	for (int i = 0; i < value; i++) {
		int c = a+b;
		printf("%d ", a);
		a = b;
		b = c;
	}
}

void fibonacci_to_n(int value) {
	int a = 0;
	int b = 1;

	while (a <= value) {
		int c = a+b;
		printf("%d ", a);
		a = b;
		b = c;
	}
}
