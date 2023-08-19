#include <stdio.h>

/**
 * main - The Fizz-Buzz test program
 *
 * Return: The 0 exit code
 **/
int main(void)
{
	int number = 2;

	printf("%d", 1);
	while (number <= 100)
	{
		if (number % 3 == 0 && number % 5 == 0)
		{
			printf(" FizzBuzz");
		}
		else if (number % 3  == 0)
		{
			printf(" Fizz");
		}
		else if (number % 5 == 0)
		{
			printf(" Buzz");
		}
		else
		{
			printf(" %d", number);
		}
		number++;
	}
	printf("\n");
	return (0);
}
