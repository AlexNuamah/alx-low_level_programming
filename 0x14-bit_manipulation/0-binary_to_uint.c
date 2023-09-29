#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - Convert a binary number to an unsigned int.
 * @b: Char string containing the binary number.
 * Return: The converted decimal number,
 * or 0 if there is an unconvertible char.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal_total, decimal_power;
	int string_length;

	if (b == NULL)
	{
		return (0);
	}
	for (string_length = 0; b[string_length] != '\0'; string_length++)
	{
		if (b[string_length] != '0' && b[string_length] != '1')
		{
			return (0);
		}
	}
	for (decimal_power = 1, decimal_total = 0, string_length--;
		string_length >= 0; string_length--, decimal_power *= 2)
	{
		if (b[string_length] == '1')
		{
			decimal_total += decimal_power;
		}
	}
	return (decimal_total);
}

