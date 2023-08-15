#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times
 * Description: this function prints the alpahbets 10 times using _putchar
 *
 * Return: Always 0 (success)
 */
void print_alphabet_x10(void)
{
	int i;
	char alpha;

	for (i = 0; i < 10; i++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
	}
}
