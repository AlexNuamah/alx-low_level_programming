#include <stdio.h>

/**
 * main - The main function is the starting point of execution for the program
 * Description: 'Prints all characters of the alphabet'
 * Return: always 0 (success)
*/
int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
