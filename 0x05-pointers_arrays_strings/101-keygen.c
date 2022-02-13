#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - create random password or tokens.
*
* Return: return 0.
*/ 
int main(void)
{
	int num_rand;
	int count;
	int total;

	srand(time(NULL));
	for (count = 0, total = 2772; total > 122; count++)
	{
		num_rand = (rand() % 125) + 1;
		printf("%c", num_rand);
		total -= num_rand;
	}
	printf("%c", total);

	return (0);
}
