#include <stdio.h>
#include <assert.h>

int factorial(int value);
void factorial_test(void);

int main(void)
{
	factorial_test();
	printf("Todos os testes passaram!\n");
	return 0;
}

int factorial(int value)
{
	if (value < 0) return 0;

	int result = 1;

	for (int i = 2; i <= value; i++)
	{
		result *= i;
	}

	return result;
}

void factorial_test(void)
{
	// NORMAL CASES
	assert(factorial(5) == 120);

	// EXTREME CASES
	assert(factorial(0) == 1);
	assert(factorial(1) == 1);

	// INVALID INPUT
	assert(factorial(-5) == 0);
}
