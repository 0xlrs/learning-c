/* Contar de 1 a N */

#include <stdio.h>

void print_numbers(int value);

int main(void) {
	print_numbers(5);
	print_numbers(10);

	return 0;
}

void print_numbers(int value) {

	for (int i = 1; i <= value; i++) {
		printf("%d ", i);
	}

	puts("...");

}
