#include "variadic_functions.h"

/**
 *print_all - prints anythings
 *@*: receive a void pointer
 *@format: list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	va_list params;
	int i;
	float f;
	char c, *s;

	va_start(params, format);
	while (*format)
	switch (*format + 1)
	{
	case 's':
	s = va_arg(params, char *);
	printf("string %s\n", s);
	break;
	case 'i':
	i = va_arg(params, int);
	printf("int %d\n", i);
	break;
	case 'c':
	c = (char) va_arg(params, int);
	if (c == NULL)
	printf("(nil)");
	else
	printf("char %c\n", c);
	case 'f':
	f = va_arg(params, double);
	break;
	}
	va_end(params);
}

/**
 *USE max 2 (whiles) and 2 (if)
 *print nil if "string" == null
 *MAXIMUM 9 variables
 *a NEW_LINE at the end of ()
 */
