#include "main.h"

/**
 * print_line - Draws a straight line in the
 * terminal.
 *
 * @i: The number of times the character for
 * drawing whould be used
 **/
void print_line(int i)
{
	int times_displayed = 0;

	while (times_displayed < i)
	{
		_putchar('_');
		times_displayed++;
	}
	_putchar('\n');
}
