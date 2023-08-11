#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/*
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
	/*
	 * Calculate the last digit of n
	 */
	int lastDig = n % 10;

	if (lastDign > 5)
	{
		printf("and %d is greater than 5\n", lastDig);
	}
	else if (lastDig == 0)
	{
		printf("and %d is equal to 0 and is 0\n", lastDig);
	}
	else
	{
		printf("and %d is less than 0 not 0\n", lastDig);
	}
	return (0);
}
