#include "main.h"
#include <stdio.h>

/**
 * clear_bit - Set the value of a bit to 0 at a given index.
 * @n: Pointer to decimal number to change.
 * @index: Index position to change.
 * Return: 1 if it worked, -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int bitmask;

if (index > 64)
return (-1);
bitmask = 1UL << index;
if ((*n & bitmask) != 0)
{
*n ^= bitmask;
}
return (1);
}
