#include "main.h"

/**
 * get_endianness - Check endianness.
 * Return: 0 if big endian, or 1 if little endian.
 */
int get_endianness(void)
{
	int test_num = 1;

	if (*(char *)&test_num == 1)
		return (1);
	else
		return (0);
}

