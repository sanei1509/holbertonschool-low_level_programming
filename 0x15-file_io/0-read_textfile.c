#include "main.h"

/**
 *read_textfile - read a file and print in the standard output
 *@filename: pointer to a file_name
 *@letters: number of letters to work
 *Return: 0 if fail
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int op = open(filename, O_RDONLY);
	char *buf;
	int cont;
	int w_ret;

	/*allocate memory*/
	buf = malloc(sizeof(char *) * letters);

	if (buf == NULL)
		return (0);
	/*invalid data since filename pointer*/
	if (filename == NULL)
	{
		free(buf);
		return (0);
	}
	/*file descriptor fail return*/
	if (op == -1)
	{
		free(buf);
		close(op);
		return (0);
	}

	cont = read(op, buf, letters);

	w_ret = write(STDOUT_FILENO, buf, letters);
	/*workin with returns case boders*/
	if (cont == -1 || w_ret == -1)
	{
		close(op);
		free(buf);
		return (0);
	}

	close(op);
	free(buf);
	return (cont);
}
