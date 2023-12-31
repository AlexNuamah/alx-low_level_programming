#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Generate random numbers and
 * check if the last digits is greater than 5
 * or equal to zero or negative
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("The last digit of %d is ", n);
	if (n > 5)
	{
		printf("and is greater than 5\n");
	}
	else if (n == 0)
	{
		printf("and is equal to 0 and is 0\n");
	}
	else
	{
		printf("and is less than 0 not 0\n");
	}
	return (0);
}
