#include "main.h"

/**
* _pow_recursion - print the result of raise x to y
* @x: number to raised
* @y: number of the raised
* Return: result of number elevated.
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y != 0)
		return (x * _pow_recursion(x, y - 1));
	else
		return (1);
}
