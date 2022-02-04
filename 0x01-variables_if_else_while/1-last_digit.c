#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 *main - entry point
 *Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	return (0);
}
