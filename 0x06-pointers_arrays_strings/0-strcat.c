#include "main.h"

/**
* *_strcat - function tha concatenate two strings
* @dest : place where append de src string
* @src: place of the string for append
* Return : char
*/

char *_strcat(char *dest, char *src)
{
	int n; int len = _strlen(dest);

	for (n = 0; src[n] != '\0';n++, len++)
	{
		dest[len] = src[n];
	}

	return (dest);
}

/**
*_strlen - swaps the value of two integers
* @s: The pointer value one
* Return: c
*/
int _strlen(char *s)
{
	int c = 0;

	while (s[c] != '\0')
		c++;

	return (c);
}

