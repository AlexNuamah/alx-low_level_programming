#include "main.h"

/**
 * _islower - checks for lowercase characters
 * Description: This function checks for lowercase character
 * @c: c is the character to be checked
 *
 * Return: 1 if character is lowercase, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
