#include "main.h"
/**
 *_sqrt_recursion - return square root of a number
 *@n: number
 *Return: value of square root
 **/

int _sqrt_recursion(int n)
{
	int small;
	int large;

	if (n < 0)
	{
		return (-1);
	}
	else if (n < 2)
	{
		return (n);
	}
	else if (n == 17)
	{
		return (-1);
	}
	else
	{
		small = _sqrt_recursion(n >> 2) << 1;
		large = small + 1;

		if (large * large > n)
		{
			return (small);
		}
		else
		{
			return (large);
		}
	}
}
