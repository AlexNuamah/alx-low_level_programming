#include "main.h"

/**
 * print_diagonal - Draw a diagonal line in the
 * terminal.
 *
 * @n: the number of times the \ character should
 * be displayed
 **/
void print_diagonal(int n)
{
	int times_printed = 0;
	int space;

	if (n < 1)
		_putchar('\n');
	while (times_printed < n)
	{
		space = 0;
		_putchar('\\');
		_putchar('\n');
		times_printed++;
		if (times_printed == n)
			break;
		while (space < times_printed)
		{
			_putchar(' ');
			space++;
		}
	}
}
