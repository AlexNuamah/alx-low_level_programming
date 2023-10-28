#include <stdio.h>

/**
 * main - Display the arguments sent into the program.
 * This is the entry point into the program.
 * @argc: The total number of arguments provided to
 * the program
 * @argv: Array of strings passed as values to the
 * program
 * Return: The success exit code
 **/

int main(int argc, char *argv[])
{
int i;

for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
