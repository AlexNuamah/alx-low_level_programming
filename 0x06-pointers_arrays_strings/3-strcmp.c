#include "main.h"

/**
 * _strcmp - Compare two string values.
 *
 * @s1: The first string value to be compared
 * @s2: The second string value to be compared
 *
 * Return: A value indicating the result for the
 * comparison where 0 would mean the two strings
 * are similar. A negative
 * number would mean the @s1 string is
 * less than the @s2 string and a positive number
 * would mean @s1 is greater than
 * the @s2 string.
 **/
int _strcmp(char *s1, char *s2)
{
	int index = 0;
	int a = 0;

	while (s1[index] != '\0' && s2[index] != '\0')
	{
		if (s1[index] != s2[index])
		{
			return (-(s2[index] - s1[index]));
		}

		index++;
	}

	return (a);
}
