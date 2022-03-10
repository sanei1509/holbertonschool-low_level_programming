#include "variadic_functions.h"

/**
 *print_numbers - print numbers followed a new line
 *@separator: the string printed between nums
 *@n: num of parameters
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list params;
	unsigned int i;
	int temp_number;

	va_start(params, n);

	/*border situations*/
	for (i = 0; i < n; i++)
	{
		temp_number = va_arg(params, int);
		if (separator != NULL)
		printf("%d%s", temp_number, separator);
		else
		printf("%d", temp_number);
	}
	printf("\n");
	va_end(params);
}
