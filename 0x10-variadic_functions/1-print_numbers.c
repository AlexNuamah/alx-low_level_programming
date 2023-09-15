#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Print numbers followed by a new line
 *
 * @separator: String to be printed between numbers (or NULL)
 * @n: Number of integers passed to the function
 * @...: Variable number of integer arguments
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;
	unsigned int i;

	va_start(num, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(num, int));
		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(num);
	printf("\n");
}
