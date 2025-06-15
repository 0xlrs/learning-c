/* Calculadora simples com 4 operações */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int somar(int a, int b);
int subtrair(int a, int b);
int multiplicar(int a, int b);
double dividir(int a, int b);
void calculadora(int a, int b, char operator);

int main(void) {
	int a, b = 0;
	bool is_running = true;

	printf("digite os valores [a, b]: ");
	scanf("%d %d", &a, &b);
	
	while(is_running) {
		int option = 0;
	
		puts("...");		
		puts("[1] SOMAR");
		puts("[2] SUBTRAIR");
		puts("[3] MULTIPLICAR");
		puts("[4] DIVIDIR");
		puts("[5] SAIR");
		
		printf("\ndigite uma opção acima: ");
		scanf("%d", &option);

		system("clear");

		switch (option) {
			case 1:
				calculadora(a, b, '+');
				break;
			case 2:
				calculadora(a, b, '-');
				break;
			case 3:
				calculadora(a, b, '*');
				break;
			case 4:
				calculadora(a, b, '/');
				break;
			case 5:
				puts("bye bye");
				is_running = false;
				break;
			default:
				puts("opção inválida, digite novamente...");
				break;
		}

	}
	
	return 0;
}

int somar(int a, int b) {
	return a+b;
}

int subtrair(int a, int b) {
	return a-b;
}

int multiplicar(int a, int b) {
	return a*b;
}

double dividir(int a, int b) {
	if (b == 0) return 0;
	else return (double)a/b;
}

void calculadora(int a, int b, char operator) {
	switch (operator) {
		case '+':
			printf("[%d + %d = %d]\n", a, b, somar(a, b));
			break;
		case '-':
			printf("[%d - %d = %d]\n", a, b, subtrair(a, b));
			break;
		case '*':
			printf("[%d x %d = %d]\n", a, b, multiplicar(a, b));
			break;
		case '/':
			if (b == 0) puts("divisão inválida (divisor igual a zero)");
			else printf("[%d / %d = %.2f]\n", a, b, dividir(a, b));
			break;
		default:
			puts("operador inválido");
			break;
	}
}
