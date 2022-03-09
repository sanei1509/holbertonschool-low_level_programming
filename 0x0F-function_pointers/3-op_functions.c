#include "3-calc.h"

/**
 *op_add - sum a + b
 *@a: receive num 1
 *@b: receive num 2
 *Return: sum of a & b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 *op_sub - restar a -b
 *@a: receive num 1
 *@b: receive num 2
 *Return: la resta de a & b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 *op_mul - restar a &
 *@a: receive num 1
 *@b: receive num 2
 * Return: mult of a & b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 *op_div - divide a & b
 *@a: receive num 1
 *@b: receive num 2
 *Return: the mult of a & b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 *op_mod - calc module a & b
 *@a: receive num 1
 *@b: receive num 2
 *Return: module of a & b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
