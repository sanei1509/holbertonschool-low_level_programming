#ifndef _VARIADIC_FUNCTIONS_H
#define _VARIADIC_FUNCTIONS_H

#include <stdio.h>
#include <stdarg.h>

/*protoypes*/
int sum_them_all(const unsigned int n, ...);

void print_numbers(const char *separator, const unsigned int n, ...);

void print_strings(const char *separator, const unsigned int n, ...);

int _putchar(char c);

#endif
