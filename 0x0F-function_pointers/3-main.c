#include "3-calc.h"

/**
 *main - entry point
 *@argc: count arguments
 *@argv: array with the arguments
 *Return: an int
 */

int main(int argc, char *argv[])
{
	/*number of arguments is X*/
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	/* user tries divide or module of 0*/
	if ((argv[2][0] == '/' || argv[2][0] == '%') && (atoi(argv[3]) == 0))
	{
		printf("Error\n");
		exit(100);
	}
	/*sino coincide con los simbolos*/
	if ((get_op_func(argv[2])) || (argv[2][1] != '\0'))
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", (*get_op_func(argv[2]))(atoi(argv[1]), atoi(argv[3])));

	return (0);
}
