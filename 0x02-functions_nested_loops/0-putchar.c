#include "main.h"
/**
 *main-print _putchar with putchar
 *Return: 0
 */
int main(void)
{
	int i;
	char text[9] = "_putchar\n";

	for (i = 0; i < 10; i++)
	{
		_putchar(text[i]);
	}
	return (0);
}
