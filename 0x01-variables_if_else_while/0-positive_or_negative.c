#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * Main - The main function is the starting point of execution for the program
 * Description:
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	/*
	 * Instructions to generate random numbers
	 */
	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/*
	 * conditional statemnents to check if the number
	 * generated is positive, negative or zero.
	 */
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
