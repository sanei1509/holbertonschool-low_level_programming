#include "main.h"
/**
 *print_to_98 - return deppend of sign of n
 *
 *Return: 0
 *@n: number
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		for (n = n; n > 97; n--)
		{
			if (n != 98)
			{
			printf("%d, ", n);
			}
			else
			{
			printf("%d\n", n);
			}
		}
	}
	else
	{
	for (n = n; n < 99; n++)
	{
		if (n != 98)
		{
		printf("%d, ", n);
		}
		else
		{
			printf("%d\n", n);
			break;
		}
	}
	}
}
