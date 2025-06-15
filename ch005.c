/* Mostrar a tabuada de um número N */

#include <stdio.h>

void m_table(int start, int end, int value);

int main(void) {
	m_table(1, 5, 3);
	m_table(1, 5, 6);
	m_table(1, 5, 9);

	return 0;
}

void m_table(int start, int end, int value) {
	puts("...");

	for (int i = start; i <= end; i++) {
		int product = value * i;
		printf("%d x %d = %d\n", value, i, product);
	}
}
