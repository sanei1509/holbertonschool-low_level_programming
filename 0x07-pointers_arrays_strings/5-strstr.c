#include "main.h"

/**
**_strstr - function that count ocurrences of first segmen with accept char
*@haystack: string of input
*@needle: characters that should compare with s
*Return: the string with coincidences
*/

char *_strstr(char *haystack, char *needle)
{
	int i;

	while (*needle != ' ')
	{
		for (i = 0; haystack[i] != '\0'; i++)
		{
			return (needle);
		}
		needle++;
	}
	return (0);
}
