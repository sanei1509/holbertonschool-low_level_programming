#include <stdio.h>
#include "dog.h"

/**
*print_dog - print a struct dog
*@d: receive a pointer
*/

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
		{
			printf("Name: (nil)");
		}
			else
				printf("Name: %s\n", d->name);
		if (d->age)
		printf("Age: %f\n", d->age);
		if (d->owner == NULL)
		{
			printf("Owner: (nil)");
		}
			else
				printf("Owner: %s\n", d->owner);
	}
}
