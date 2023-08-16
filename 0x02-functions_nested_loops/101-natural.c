#include <stdio.h>

/**
 * main - Program to sum integers
 *
 * Description: check for all natural numbers in range of
 * 3 and 5 and sum them
 * Return: 0
 */

int main(void)
{

	int i, result;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			result += i;
		}
	}
	printf("%d\n", result);

	return (0);
}
