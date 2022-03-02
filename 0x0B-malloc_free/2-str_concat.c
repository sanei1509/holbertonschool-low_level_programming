#include "main.h"

/**
**str_concat - concatenate s1 after s2
*@s1: string 1
*@s2: string 2
*Return: Concatenated string
*/

char *str_concat(char *s1, char *s2)
{
	char *concatenated_string;
	int len_one = 0, len_two = 0;
	int i = 0, j = 0;
	/**
	*Necesitamos la longitud de s1 y s2
	*check the input
	*/
	if (s1 == NULL || s2 == NULL)
	{
		return (" ");
	}
	while (*(s1 + i))
	{
		len_one++, i++;
	}

	while (*(s2 + j))
	{
		len_two++, j++;
	}
	len_two++;
	/*no le añadimos el null a s1*/

	/* guardamos el espacio en memoria */
	concatenated_string = malloc(sizeof(char) * (len_two + len_one));

	if (concatenated_string == NULL)
	{
		return (NULL);
	}
	/*above try concatenate*/
	i = 0, j = 0;
	for (i = 0; i < len_one; i++)
		*(concatenated_string + i) = *(s1 + i);

	for (j = 0; j < len_two; i++, j++)
		*(concatenated_string + i) = *(s2 + j);

	return (concatenated_string);
}
