#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Sum all parameters
 * @n: const unsigned int
 * Return: int sum
 */
int sum_them_all(const unsigned int n, ...)
{
va_list num;
unsigned int i;
int sum = 0;

if (n == 0)
return (0);
va_start(num, n);
for (i = 0; i < n; i++)
{
sum += va_arg(num, int);
}
return (sum);
}
