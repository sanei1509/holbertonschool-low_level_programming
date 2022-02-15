#include "main.h"

/**
* _strcmp - function that compares two strings
* @s1 : number one to compare
* @s2: number two to compare
* Return: 0 is numbers are equal result of sustraction if not.
*/

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int res;

	res = *s1 - *s2;

	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		i++;
	}
		if (s1[i] < s2[i])
			return (res);
		else if (s1[i] > s2[i])
			return (res);
		else
			return (0);
}
