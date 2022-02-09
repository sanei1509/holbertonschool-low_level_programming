#include "main.h"
#include <stdio.h>

/**
 *fizz_buzz - print things
 *Return: 0
 */
int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if ((((n % 2 || n % 3 || n % 5)) == 0))
		{
			printf("FizzBuzz ");
		}
		else if (n % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (n % 3 == 0)
		{
			printf("Fizz ");
		}
		else
			printf("%d ", n);
	}
	putchar('\n');
	return (0);
}
