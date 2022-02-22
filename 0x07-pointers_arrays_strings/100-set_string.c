#include "main.h"

/**
*set_string - set the value of a pointer to a char
*@s: double pointer
*@to: pointer to a simple char
*/

void set_string(char **s, char *to)
{
	*s = to;
}
