#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 *main - print the alphabet except q and e
 *Return: 0
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
	if (ch != 'q' && ch != 'e')
		{
		putchar(ch);
		}
	}
	putchar('\n');
	return (0);
}
