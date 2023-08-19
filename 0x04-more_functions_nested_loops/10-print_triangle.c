#include "main.h"

/**
 * print_triangle - Display a triangle with the given size.
 *
 * @size: The size for the triangle
 **/
void print_triangle(int size)
{
	int hashes;
	int spaces;
	int rows = 1;
	int times_displayed;

	if (size < 1)
	{
		_putchar('\n');
	}
	while (rows <= size)
	{
		spaces = size - rows;
		while (times_displayed < spaces)
		{
			_putchar(' ');
			times_displayed++;
		}
		hashes = size - spaces;
		times_displayed = 0;
		while (times_displayed < hashes)
		{
			_putchar('#');
			times_displayed++;
		}
		_putchar('\n');
		rows++;
	}
}
