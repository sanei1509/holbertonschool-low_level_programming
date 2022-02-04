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

	for (num = 0; num <= 9; num++)
	{
		for (num1 = (num + 1); num1 <= 9; num1++)
		{
			putchar(num + '0');
			putchar(num1 + '0');
			if (num != 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
