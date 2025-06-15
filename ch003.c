/* Dado um número de 3 dígitos, separar centena, dezena e unidade */

#include <stdio.h>

int main(void) {
	int value = 0; 
	int counter = 0;
	int sum = 0;
	int divider = 100;
	int units[3] = {0};

	do {
		printf("digite um valor com 3 dígitos: ");
		scanf("%d", &value);
	} while (value < 100 || value > 999);
	
	while (value > 0) {
		int division = value / divider;
		int rest = value % divider;
		
		units[counter] = division * divider;

		value = rest;
		divider = divider / 10;
		
		counter++;
	}
	
	puts("...");
	printf("%d centena(s)\n", units[0]/100);
	printf("%d dezena(s)\n", units[1]/10);
	printf("%d unidade(s)\n", units[2]);
	puts("...");
	
	for (int i = 0; i < 3; i++) {
		if (i == 2) printf("%d = ", units[i]);
		else printf("%d + ", units[i]);

		sum += units[i];
	}

	printf("%d\n", sum);

	return 0;
}
