#include "main.h"

/**
*main - multiplies two numbers
*@argc: count the argument on the command line
*@argv: vector of arguments
*Return: 0
*/

int main(int argc, char *argv[])
{
	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
	else
		printf("%d \n", atoi(argv[1]) * atoi(argv[2]));

	return (0);
}
