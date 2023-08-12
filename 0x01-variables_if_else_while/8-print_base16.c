#include <stdio.h>

/**
 * main - The main function is the starting of execution for the program
 * Description:
 * Return: Always 0 (succeess)
 */
int main(void)
{
	char i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i);
	}
	for (i = 'a'; i <= 'f'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
