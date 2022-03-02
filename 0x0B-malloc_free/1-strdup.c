#include "main.h"

/**
**_strdup - function that return a pointer to str_copy
*@str: receive a pointer to a string
*Return: pointer to a char or null
*/

char *_strdup(char *str)
{
	char *copy_of_str;
	unsigned int i = 0;
	unsigned int ld = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	/**
	*calculo longitud del string
	*/
	while (str[ld] != '\0')
	{
		ld++;
	}

	copy_of_str = malloc(sizeof(char) * ld);
	if (copy_of_str == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < ld; i++)
		{
			copy_of_str[i] = str[i];
		}

	return (copy_of_str);
	}
}
