#include "main.h"

/**
* *leet - function that capitalize all words of a string
* @c: string received
* Return: value transformed to some numbers required
*/

char *leet(char *c)
{
	int i = 0;
	int a = 0;
	int or[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int new[] = {52, 52, 51, 51, 48, 48, 55, 55, 49, 49};

	for (; c[i]; i++)
	{
		for (; a < 10; a++)
		{
			if (c[i] == or[a])
			{
				c[i] = new[a];
			}
		}
	}

	return (c);
}
