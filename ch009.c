/* Classificar idade: criança (0-12), adolescente (13-17), adulto (18-60), idoso (60+) */

#include <stdio.h>

#define RANGE 8

void classify_age(int value);

int main(void) {
	int ages[RANGE] = {-5, 0, 10, 12, 15, 18, 55, 62};

	for (int i = 0; i < RANGE; i++) {
		printf("%2d ano(s) \t> ", ages[i]);
		classify_age(ages[i]);
	}

	return 0;
}

void classify_age(int value) {
	if (value < 0) puts("Fora de categoria");
	else if (value < 13) puts("Criança");
	else if (value < 18) puts("Adolescente");
	else if (value < 60) puts("Adulto");
	else puts("Idoso");
}
