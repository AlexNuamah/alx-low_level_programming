#include "main.h"

/**
 * print_last_digit - This function prints the last digit of a number
 *
 * @n: The argument to be checked
 * Return: the absolute value of n
 */
int print_last_digit(int n)
{
	int abs;

	abs = n % 10;

	if (abs < 0)
	{
		abs = abs * -1;
		_putchar(abs + '0');
		return (abs);
	}
	return (0);
}
