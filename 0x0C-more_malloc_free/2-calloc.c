#include "main.h"
#include <string.h>
/**
 **_calloc - allocates memory for an array nmemb of size elements
 *@nmemb: num of elements
 *@size: size of elements
 *Return: a pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ar;
	unsigned int i;
	
	/* antes de asignar memoria*/
	if (nmemb == 0 || size == 0)
		return (NULL);

	ar = malloc(nmemb * size);

	if (ar == NULL)
		return (NULL);
	if (nmemb == 0 || size == 0)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
	{
		*((char *)ar + i) = 0;
	}

	return (ar);
}
