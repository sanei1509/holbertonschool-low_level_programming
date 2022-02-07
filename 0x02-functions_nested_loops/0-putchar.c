#include "main.h"
/**
 *main-print _putchar with putchar
 *Return: 0
 */
int main(void)
{
	int i;
	char text[8] = "_putchar";

	for (i = 0; i <= 7; i++)
	{
		_putchar(text[i]);
	}
	putchar('\n');
	return (0);
}
