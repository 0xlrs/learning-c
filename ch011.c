/* Simular um caixa eletrônico (apenas com cédulas) */

#include <stdio.h>

int pegar_valor(void);
void printar_cedulas(int valor);

int main(void) 
{	
	int valor = pegar_valor();
	printar_cedulas(valor);
	
	return 0;
}

int pegar_valor(void)
{
	int resultado = 0;

	do
	{
		printf("Digite um valor: ");
		scanf("%d", &resultado);
	} while (resultado < 0 || resultado > 1000000);

	return resultado;
}

void printar_cedulas(int valor)
{
	int cedulas[7] = {100, 50, 20, 10, 5, 2, 1};

	puts("...");

	for (int i = 0; i < 7; i++)
	{
		int quantidade = valor / cedulas[i];
		// int resto = valor % notas[i];
		// valor = resto;
		// VOCÊ RESUME ESSAS DUAS LINHAS ACIMA COM:
		valor %= cedulas[i];

		// (double)cedulas[i] possibilita a formatação em ponto flutuante
		// sem alterar o valor original ou modificar o tipo de dado do vetor
		printf("%d nota(s) de R$ %.2f\n", quantidade, (double)cedulas[i]);
	}
}
