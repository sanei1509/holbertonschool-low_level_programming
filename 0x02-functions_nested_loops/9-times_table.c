#include "main.h"
/**
 *print_last_digit - return deppend of sign of n
 *
 *Return: 0
 *@c: number for evaluate
 */
void times_table(void)
{	
	int res = 0;
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			res= j * i;
			if (res > 9)
			{
				if (j != 0)
				{
					_putchar(' ');
			 	}
					_putchar((res / 10) + 48);
					_putchar((res % 10) + 48);
					if (j != 9)
					{
						if(res < 9)
						{
						_putchar(',');
						_putchar(' ');
						}
						else
						{
						_putchar(',');
						}
					}
			}
			else
			{
					if (j != 0)
					{
						_putchar(' ');
						_putchar(' ');
					}
			_putchar(res + 48);
					if (j != 9)
					{
						_putchar(',');
					}
				
			}
		}
		_putchar('\n');
	}
}
