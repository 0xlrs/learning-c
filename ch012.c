/* Simular um caixa eletrônico com cédulas e moedas */

#include <stdio.h>

void print_notas(double valor);
void print_moedas(double valor);

int main(void) 
{	
	print_notas(576.76);

	return 0;
}

void print_notas(double valor)
{
	double notas[6] = {100.00, 50.00, 20.00, 10.00, 5.00, 2.00};

	double centavos = valor - (int)valor;
	
	printf("\nValor: R$%.2f\n", valor);

	puts("\nNOTAS:");

	for (int i = 0; i < 6; i++)
	{	
		int casting_notas = (int)notas[i];

		int quosciente = (int)valor / casting_notas;
		int resto = (int)valor % casting_notas;

		printf("%d nota(s) de R$ %.2f\n", quosciente, notas[i]);

		valor = resto;
	}

	if (valor < 2) 
	{
		double novo_valor = valor + centavos;
		print_moedas(novo_valor);
	}
}

void print_moedas(double valor) 
{	
	double moedas[6] = {1.00, 0.50, 0.25, 0.10, 0.05, 0.01};
	
	valor *= 100;
	
	puts("\nMOEDAS:");

	for (int i = 0; i < 6; i++) 
	{
		int casting_moedas = (int)(moedas[i]*100);

		int quosciente = (int)valor / casting_moedas;
		int resto = (int)valor % casting_moedas;

		printf("%d moeda(s) de R$ %.2f\n", quosciente, moedas[i]);

		valor = resto;
	}
}
