#include "main.h"

/**
*main - print all the arguments that receives with argv
*@argc: count the argument on the command line
*@argv: vector of arguments
*Return: 0
*/

int main(int argc, char *argv[])
{
	int i = 0;

	while (i <= argc - 1)
	{
	printf("%s\n", argv[i]);
	i++;
	}
	return (0);
}
