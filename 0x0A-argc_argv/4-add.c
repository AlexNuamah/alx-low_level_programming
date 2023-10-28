#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - program adds positive numbers
 * @argc: size of argv array and number of command line arguments
 * @argv: An arrays size argc
 * Return: 0
 */
int main(int argc, char *argv[])
{
int k, l;
int sum = 0;

if (argc < 1)
printf("0\n");
for (k = 1; k < argc; k++)
{
sum += atoi(argv[k]);
for (l = 0; argv[k][l] != 0; l++)
{
if (!(isdigit(argv[k][l])))
{
printf("Error\n");
return (0);
}
}
}
printf("%d\n", sum);
return (0);
}
