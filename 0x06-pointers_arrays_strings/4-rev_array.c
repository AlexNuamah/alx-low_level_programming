#include "main.h"

/**
 * reverse_array - Reverses the contents of
 * an intger array.
 *
 * @a: The interger array to be reveresed
 * @n: The size for the array
 **/
void reverse_array(int *a, int n)
{
	int first_position = 0;
	int last_position = n - 1;
	int tmp;

	while (first_position < last_position)
	{
		tmp = a[last_position];
		a[last_position] = a[first_position];
		a[first_position] = tmp;
		last_position--;
		first_position++;
	}
}
