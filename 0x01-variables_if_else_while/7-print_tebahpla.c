#include <stdio.h>

/**
 * main - The main function is the starting point of execution for the program.
 * Description:
 * Return: Always 0 (success)
 */
int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
