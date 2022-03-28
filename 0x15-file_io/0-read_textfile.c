#include "main.h"

/**
 *read_textfile - read a file and print in the standard output
 *@filename: pointer to a file_name
 *@letters: number of letters to work
 *Return: 0 if fail
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	size_t i;
	int op = open(filename, O_RDONLY);
	char buf[1024];

	if(*filename)
	{
	if (op == -1)
		return (0);

	for (i = 0; i < letters; i++)
	{
		_putchar(buf[i]);
	}

	read(op, buf, letters);

	close(op);

	return (letters);
	}
	return (0);
}
