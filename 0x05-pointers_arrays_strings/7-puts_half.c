#include "main.h"
/**
  * puts_half -  prints a string
  *
  * @str: arg *str
  *
  * Return: string to stdout
  */
void puts_half(char *str)
{
	int len, n;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	if (len % 2 == 0)
	{
		n = len / 2;
		while (len > n)
		{
			_putchar(str[n]);
			n++;
		}
	}
	else
	{
		n = (len + 1) / 2;
		while (len > n)
		{
			_putchar(str[n]);
			n++;
		}
	}
	_putchar('\n');
}
