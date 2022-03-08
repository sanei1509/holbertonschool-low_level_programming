#include "dog.h"

/**
 *init_dog - initialize variable of type struct dog
 *struct dog - atributes to a dog
 *@d: pointer to a struct
 *@name: pointer to a name
 *@age: receive age
 *@owner: pointer to a owner name
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
