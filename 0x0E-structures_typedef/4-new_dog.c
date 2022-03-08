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
	dog_t *arr;
	int i, j, lname = _strlen(name), lowner = _strlen(owner);
	
	lname++, lowner++;

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
	arr->name = malloc(sizeof(char) * lname);
	if (arr->name == NULL)
	{
		free(arr);
		return (NULL);
	}
	/* do copy of name*/
	for (i = 0; i < lname; i++)
		arr->name[i] = name[i];
	/* alloc memory for owner*/
	arr->owner = malloc(sizeof(char) * lowner);
	if (arr->owner == NULL)
	{
		free(arr);
		return (NULL);
	}
	/* Do a copy of owner */
	for (j = 0; j < lowner; j++)
		arr->owner[j] = owner[j];

	arr->age = age;

	return (arr);
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
