#include <stdio.h>

/**
 * main - Display the name for the program. This is
 * the entry point into the program.
 * @argc: size of argv array and number of command line arguments
 * @argv: An arrays of sizes argc
 * Return: The success exit code
 */
int main(int argc __attribute__((unused)), char *argv[])
{
printf("%s\n", argv[0]);
return (0);
}
