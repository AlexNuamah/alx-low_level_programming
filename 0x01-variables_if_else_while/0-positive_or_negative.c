#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/*
 * main - entry point
 * The main function is the starting of execution for the program
 * Return: Always 0 (success)
 */

/*
 * Main code block
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/*
	 * Conditional statements to check if the the
	 * random number generated is positive, negative or equal to zero.
	 */
	if (n > 0)
	{
		printf("The number %d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("The number %d is zero\n", n);
	}
	else
	{
		printf("The number %d is negative\n", n);
	}
	return (0);
}
