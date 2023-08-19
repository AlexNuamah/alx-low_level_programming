#include "main.h"

/**
 * more_numbers - prints numbers from 0 - 14 ten times
 */
void more_numbers(void)
{
	int times_displayed = 0;
	char numbers[20] = "01234567891011121314";
	int number_index;

	while (times_displayed < 10)
	{
		number_index = 0;
		while (number_index < 20)
		{
			_putchar(numbers[number_index]);
			number_index++;
		}
		times_displayed++;
		_putchar('\n');
	}
}
