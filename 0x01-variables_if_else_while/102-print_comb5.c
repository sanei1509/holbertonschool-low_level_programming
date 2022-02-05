#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 *main - print the number zero to nine separate with coma
 *Return: 0
 */
int main(void)
{
	int num;
	int num1;
	int num2;
	int num3;

	for (num2 = 0; num2 <= 9; num2++)
	{
		for (num3 = 0; num3 <= 9; num3++)
		{

			for (num = num2; num <= 9; num++)
			{
				for (num1 = (num + 1); num1 <= 9; num1++)
				{
					putchar(num2 + '0');
					putchar(num3 + '0');
					putchar(' ');
					putchar(num + '0');
					putchar(num1 + '0');
					if (!((num2 == 9 && num3 == 8) && (num == 9 && num1 == 9)))
					{
					putchar(',');
					putchar(' ');
					}
				}
			}

		}
	}
	putchar('\n');
	return (0);
}
