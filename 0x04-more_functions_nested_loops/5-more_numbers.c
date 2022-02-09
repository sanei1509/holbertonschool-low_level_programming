#include "main.h"

/**
 *more_numbers - print 10 times 0 to 14
 *Return: 0
 */

void more_numbers(void)
{
	int num = 0;
	int i;

	for (i =0; i<= 9; i++)
	{
		num=0; /* reset the value of while*/
		while (num <= 14)
		{
			if (num > 9)
			{
				_putchar(((a / 10) % 10) + '0');
			}	
			_putchar(num % 10 + '0');
			num++;
		}
		_putchar('\n');
	}
}
