#include "main.h"

/**
 * main - The main is the starting of execution for the program
 * Description: Displays the result of the _islower function
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int r;

	r = _islower('H');
	_putchar(r + '0');
	r = _islower('o');
	_putchar(r + '0');
	r = _islower(108);
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}
