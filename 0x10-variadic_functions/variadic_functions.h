#ifndef _VARIADIC_FUNCTIONS_H
#define _VARIADIC_FUNCTIONS_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
*type - struct
*@type: type of the variable
*@f: function that choose other
*/
typedef struct type
{
char type;
void (*f)(va_list);
}types_t;

/*protoypes*/
int sum_them_all(const unsigned int n, ...);

void print_numbers(const char *separator, const unsigned int n, ...);

void print_strings(const char *separator, const unsigned int n, ...);

int _putchar(char c);

void print_all(const char * const format, ...);

#endif
