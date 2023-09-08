#include <stdio.h>

/**
 * main - Display the number of arguments passed to the
 * program. This is the entry point into the program.
 *
 * @argc: sizes of argv array and number of command line arguments
 *
 * @argv: An arrays of sizes argc
 *
 * Return: The success exit code
 */

int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
