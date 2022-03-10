#include "variadic_functions.h"

/**
 *print_strings - print strings
 *@separator: receive string to print
 *@n: is the number of strings
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list params;

	unsigned int i;
	char *string;

	/*initialize*/
	va_start(params, n);

	for (i = 0; i < n; i++)
	{
		string = va_arg(params, char *);
	
		if (i < n - 1 && separator != NULL)
			printf("%s%s", string, separator);
		else
			printf("%s", string);
	}
	printf("\n");
	va_end(params);
}

