#include "main.h"

/**
**string_nconcat - concatenate s1 to s2 hasta n
*@s1:receive a string
*@s2:receive a string
*@n: num of pos where finalize s2
*Return: a pointer to the allocated memory
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *conc_string;
	unsigned int len_one = 0, len_two = 0, i = 0, j = 0;
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
	if (n >= len_two)
		n = len_two;

	/*above try concatenate*/
	i = 0, j = 0;
	for (i = 0; i < len_one; i++)
		*(conc_string + i) = *(s1 + i);

	for (j = 0; i < (len_one + n); i++, j++)
	{
		*(conc_string + i) = *(s2 + j);
	}

	return (conc_string);
}
