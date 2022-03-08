#ifndef _DEFINE_DOG
#define _DEFINE_DOG

#include <stdio.h>
/**
 *struct dog - atributes of dog
 *@name: pointer to a name
 *@age: receive age
 *@owner: pointer to a owner
 */
struct dog
{
char *name;
float age;
char *owner;
};

/**
 *dog_t - type of struct
 */
typedef struct dog dog_t;

void print_dog(struct dog *d);

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
