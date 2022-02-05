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

	for (num = 0; num <= 9; num++)
	{
		for (num1 = (num + 1); num1 <= 9; num1++)
		{
			for (num2 = (num1 + 1); num2 <= 9; num2++)
			{
			putchar(num + '0');
			putchar(num1 + '0');
			putchar(num2 + '0');
			if (num != 7)
			{
				putchar(',');
				putchar(' ');
			}
			}
		}
	}
	putchar('\n');
	return (0);
}
