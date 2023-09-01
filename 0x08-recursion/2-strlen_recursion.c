#include "main.h"

/**
 * _strlen_recursion - returns the lengths of a string
 *
 * @s: char args
 *
 * Return: the length of the given string
 */

int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
		return (0);
}
