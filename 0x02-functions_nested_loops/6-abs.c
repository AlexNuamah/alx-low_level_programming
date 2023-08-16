#include "main.h"

/**
 * _abs - writes a function that prints the sign of a number
 * @n: argument that'll be checked
 *
 * Return: The absolute value of n
 */
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else
	{
		return (n * -1);
	}
}
