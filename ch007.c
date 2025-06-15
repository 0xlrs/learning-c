/* Listar todos os números primos até N */

#include <stdio.h>

void prime(int end_value);

int main(void) {
	prime(27);
	prime(56);
	
	return 0;
}

void prime(int end_value) {
	for (int i = 1; i <= end_value; i++) {
		int dividers = 0;
		
		for (int j = 1; j <= i; j++) {
			if (i % j == 0) dividers++;
		}

		if (dividers == 2) printf("%d ", i);
	}

	puts("...");
}
