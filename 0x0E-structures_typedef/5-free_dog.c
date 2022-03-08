#include "dog.h"

/**
 *free_dog - frees dogs
 *@d: receive a pointer to a struct of dog
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
	free(d->name);
	free(d->owner);
	free(d);
	}
}
