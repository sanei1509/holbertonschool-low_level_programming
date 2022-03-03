#include "main.h"

/**
 **_calloc - allocates memory for an array nmemb of size elements
 *@nmemb: num of elements
 *@size: size of elements
 *Return: a pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ar;
	unsigned int i;

	ar = malloc(nmemb * size);

	if (ar == NULL)
		return (NULL);
	if (nmemb == 0)
		return (NULL);
	if (size == 0)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
	{
		ar[i] = 0;
	}

	return (ar);
}
