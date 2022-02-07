#include "main.h"
/**
 *print_alphabet_x10 - print the alphabet ten times
 */
void print_alphabet_x10(void)
{
	int i;
	int lt;

	for (i = 0; i <= 9; i++)
	{
		for (lt = 'a'; lt <= 'z'; lt++)
		{
			_putchar(lt);
		}
		_putchar('\n');

	}
}
