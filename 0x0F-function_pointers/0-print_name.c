#include "function_pointers.h"

/**
*print_name - function that print a name
*@name: receive a name
*@f: receive a function pointer to
*/

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL)
		f(name);
}

