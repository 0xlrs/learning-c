/* Simular um caixa eletrônico com cédulas e modas */

#include <stdio.h>
#include <math.h>

void printar_cedulas(double valor);
void printar_moedas(int valor);

int main(void) 
{ 
	printar_cedulas(576.76);

	return 0; 
}

void printar_cedulas(double valor)
{
	int cedulas[6] = {10000, 5000, 2000, 1000, 500, 200}; // cédulas em centavos (unidade base)
	int valor_total = round(valor * 100); // também posso fazer (valor*100 + 0.5);
	
	printf("\nValor: R$%.2f\n", valor);
	puts("\nNOTAS:");

	for (int i = 0; i < 6; i++)
	{
		int quantidade = valor_total / cedulas[i];
		printf("%d nota(s) de R$ %.2f\n", quantidade, cedulas[i] / 100.0); // IMPORTANTE
		valor_total %= cedulas[i]; // equivale a int resto = valor_total % cedulas[i];
	}

	printar_moedas(valor_total);
}

void printar_moedas(int valor)
{
	int moedas[6] = {100, 50, 25, 10, 5, 1};

	puts("\nMOEDAS:");

	for (int i = 0; i < 6; i++)
	{
		int quantidade = valor / moedas[i];
		printf("%d moeda(s) de R$ %.2f\n", quantidade, moedas[i] / 100.0);
		valor %= moedas[i];
	}
}
