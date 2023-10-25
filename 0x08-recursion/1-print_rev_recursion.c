#include "main.h"

/**
 * _print_rev_recursion - prints string reverse
 * @s: char args
 * Returns: void
*/
void _print_rev_recursion(char *s)
{
if (*s)
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}
