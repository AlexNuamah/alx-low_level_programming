#include <stdio.h>

/**
 * main - The main function is the starting of execution for the program
 * Description:
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;

	putchar('0');

	for (i = 1; i <= 9; i++)
	{
		if (i != '0')
		{
			putchar(' ');
			putchar(',');
			putchar(i + '0');
		}
	}
	return (0);
}
