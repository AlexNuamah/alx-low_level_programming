#include "main.h"

/**
 * swap_int - swaps two given ints
 * @a: int pointer
 * @b: int pointer
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c = *b;
	*b = *a;
	*a = c;
}
