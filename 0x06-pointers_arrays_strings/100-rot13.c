#include "main.h"

/**
* *rot13 - function that capitalize all words of a string
* @c: string received
* Return: value transformed to some numbers required
*/

char *rot13(char *c)
{
	int i = 0;
	int a = 0;
	char encode[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char decode[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (; c[i]; i++)
	{
		for (a = 0; a < 52; a++)
		{
			if (c[i] == encode[a])
			{
				c[i] = decode[a];
				break;
			}
		}
	}
	return (c);
}
