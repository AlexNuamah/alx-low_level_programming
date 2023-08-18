#include <unistd.h>

/**
 * _putchar - writes the character c to standout
 * Return: 1 on success
 * on error: -1 is returned and error is set appropiately
 */
int _putchar(char c)
{
	return (write(1, &c,1));
}
