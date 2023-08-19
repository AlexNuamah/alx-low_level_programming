#include <stdio.h>

/**
 * main - Determine and print the largest prime
 * factor of the number 612852475143
 *
 * Return: 0 exit code
 **/
int main(void)
{
	long int number = 612852475143;
	long int biggest_prime = number;
	long int factor = 2;

	while (biggest_prime > factor)
	{
		if (biggest_prime % factor == 0)
		{
			biggest_prime = biggest_prime / factor;
		}
		else
		{
			factor++;
		}
	}
	printf("%li\n", biggest_prime);
	return (0);
}

