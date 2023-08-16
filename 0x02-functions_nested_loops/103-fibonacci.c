#include "stdio.h"

/**
 * main - Result of the even-valued terms of fib
 *
 *
 * Return: 0
 */

int main(void)
{
	long int fib1, fib2, fib3, result;

	fib1 = 0;
	fib2 = 0;
	fib3 = 1;
	result = 0;

	while (fib2 < 4000000)
	{
		fib2 = fib1 + fib3;
		fib1 = fib3;
		fib3 = fib2;

		if (fib2 % 2 == 0)
		{
			result += fib2;
		}

	}
	printf("%ld\n", result);

	return (0);
}
