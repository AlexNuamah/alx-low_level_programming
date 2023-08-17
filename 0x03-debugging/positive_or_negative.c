#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - this is the starting of execution for the program
 *
 * Return: Always 0 (success)
 */
int positive_or_negative(int i)
{
	/*
	 * instructions to generate random numbers
	 */
	srand(time(0));
	i = rand() - RAND_MAX / 2;

	/**
	 * conditional statements to chech if the generated
	 * number is positive, negative or zero
	 */
	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else
	{
		printf("%d is negative\n", i);
	}
	return (0);
}
