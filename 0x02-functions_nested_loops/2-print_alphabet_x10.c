#include <stdio.h>
#include <stdlib.h>
/**
 *main - check the code.
 *
 *Return: Always 0.
 */
void print_alphabet_x10(void);

int main(void)
{
	print_alphabet_x10();
	return (0);
}
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
			putchar(lt);
		}
		putchar('\n');

	}
}
