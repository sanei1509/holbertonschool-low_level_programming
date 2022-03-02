#include "main.h"

/**
**str_concat - concatenate s1 after s2
*@s1: string 1
*@s2: string 2
*Return: Concatenated string
*/

char *str_concat(char *s1, char *s2)
{
	char *conc_string;
	int len_one = 0, len_two = 0;
	int i = 0, j = 0;
	/**
	*Necesitamos la longitud de s1 y s2
	*check the input
	*/
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (*(s1 + i))
		len_one++, i++;
	while (*(s2 + j))
		len_two++, j++;
	len_two++;
	/*no le añadimos el null a s1*/

	/* guardamos el espacio en memoria */
	conc_string = malloc(sizeof(char) * (len_two + len_one));

	if (conc_string == NULL)
	{
		return (NULL);
	}
	/*above try concatenate*/
	i = 0, j = 0;
	for (i = 0; i < len_one; i++)
		*(conc_string + i) = *(s1 + i);

	for (j = 0; j < len_two; i++, j++)
		*(conc_string + i) = *(s2 + j);

	return (conc_string);
}
