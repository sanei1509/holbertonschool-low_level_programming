#include "3-calc.h"

/**
**get_op_func - return a pointer to the function correspondiente
*@s: the argument to the program
*Return: a pointer to correspondly function
*/

int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
int i;

/*init i*/
i = 0;

while (ops[i].op != NULL)
{
	if (*ops[i].op == *s)
	{
		return (ops[i].f);
	}
	i++;
}
return (NULL);

}
