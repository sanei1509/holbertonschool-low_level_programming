#include "main.h"

/**
**malloc_checked - allocates memory using
*@b:receive type of variable
*Return: a pointer to the allocated memory
*/

void *malloc_checked(unsigned int b)
{
	void *ar;

	ar = malloc(b);
	if (ar == NULL)
	{
		exit(98);
	}

	return (ar);
}
