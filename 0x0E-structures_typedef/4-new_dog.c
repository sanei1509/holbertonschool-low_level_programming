#include "dog.h"

/**
 **new_dog - function that creates a new dog
 *@name: receive name
 *@age: receive age
 *@owner: receive owner name
 *Return: a new type of dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i, j;
	dog_t *arr;

	/*tengo que tener valores*/
	if (name && owner)
	{
	/* alloc memory for struct */
	arr = malloc(sizeof(dog_t));
	if (arr == NULL)
	{
		return (NULL);
	}
	/* alloc memory for name */
	arr->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (arr->name == NULL)
	{
		free(arr);
		return (NULL);
	}
	/* do copy of name*/
	for (i = 0; i <= (_strlen(name) + 1); i++)
		arr->name[i] = name[i];
	/* alloc memory for owner*/
	arr->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (arr->owner == NULL)
	{
		free(arr);
		return (NULL);
	}
	/* Do a copy of owner */
	for (j = 0; j < (_strlen(owner) + 1); j++)
		arr->owner[j] = owner[j];

	arr->age = age;
	}
	return (NULL);
}

/**
 *_strlen - swaps the value of two integers
 * @s: The pointer value one
 * Return: c
 */
int _strlen(char *s)
{
	int c = 0;

	while (s[c] != '\0')
		c++;
	return (c);
}
