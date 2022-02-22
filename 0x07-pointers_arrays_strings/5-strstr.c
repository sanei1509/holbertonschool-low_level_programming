#include "main.h"

/**
**_strstr - function that count ocurrences of first segmen with accept char
*@haystack: string of input
*@needle: characters that should compare with s
*Return: the stri	ng with coincidences
*/

char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int a = 0;
	
	while (haystack[i])
	{
		while (needle[a])
		{
			if (haystack[i + a] != needle[a])
			{
				break;
			}
			a++;
		}
		if (needle[a] == "\0")
		{
			return (haystack + i);
		}
		i++
	}
	return (0);
}
