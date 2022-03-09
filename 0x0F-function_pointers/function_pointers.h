#ifndef _FUNCTION_POINTERS_H
#define _FUNCTION_POINTERS_H

#include <stdio.h>
#include <stddef.h>

/*put the structs on the functions prototype*/

void print_name(char *name, void (*f)(char *));

int _putchar(char c);

void array_iterator(int *array, size_t size, void (*action)(int));

#endif
