#include "main.h"

/**
* factorial - print the factorial of given number
* @n: number to do a factorial
* Return: Always 0.
*/

int factorial(int n)
{
	if (n >= 1)
	{
		return (n * factorial(n - 1));
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
		return (1);
}
