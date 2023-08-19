#include "main.h"

/**
 * _isdigit - Check whether the given number is
 * a digit and not any other ASCII character
 *
 * @c: is the character to be checked
 *  Return: 1 if @c is digit 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
