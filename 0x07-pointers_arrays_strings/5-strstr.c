#include "main.h"

/**
**_strstr - function that count ocurrences of first segmen with accept char
*@haystack: string of input
*@needle: characters that should compare with s
*Return: the stri	ng with coincidences
*/

char *_strstr(char *haystack, char *needle)
{
	int i;

	while (*needle != '\0')
	{
		for (i = 0; haystack[i] != '\0'; i++)
		{
			if (haystack[i] == *needle)
			{
				return (haystack + i);
			}
		}
		needle++;
	}
	return (0);
}
