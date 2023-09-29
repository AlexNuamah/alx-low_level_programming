#include "main.h"
#include <stdio.h>

/**
 * flip_bits - Flip bits to convert one number to another number.
 * @n: First number.
 * @m: Second number to convert to.
 * Return: Number of bits that were needed to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int difference;
	unsigned int bit_count;

	difference = n ^ m;
	bit_count = 0;
	while (difference)
	{
		bit_count++;
		difference &= (difference - 1);
	}
	return (bit_count);
}

