#include <stdio.h>
#include <stdlib.h>
/**
 *main - call the function print_alphabet
 *
 *Return: 0
 */
void print_alphabet(void);

int main(void)
{
	print_alphabet();
	return (0);
}
/**
 *print_alphabet - function that print alphabet
 */
void print_alphabet(void)
{
	int lt;

	for (lt = 'a'; lt <= 'z'; lt++)
	{
		putchar(lt);
		putchar('\n');
	}
}
