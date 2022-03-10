#include "variadic_functions.h"

/**
 *sum_them_all - sum all the parameters
 *@n: num of parameters
 *Return: the sum of the parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum;

	if (n == 0)
		return (0);
	/*initialize*/
	va_start(ap, n);

	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);/*obtiene el siguiente argumento*/
	/*Limpiamos*/
	va_end(ap);
	return (sum);
}
