#include "main.h"

/**
 *main - copy file 1 into file 2
 *@argc: count of arguments
 *@argv: array with arguments
 * Return: 1
 */

int main(int argc, char *argv[])
{
	FILE *file_src,  *file_dest;
	int count, writes, close_d;
	char buf[1024];

	/*incorrect number of args*/
	if (argc != 3)
		dprintf(2, "Usage: cp file_from file_to\n"), exit(97);

	file_src = open(argv[1], O_RDONLY);
	if (file_src == -1)
		dprintf(2, "Error: Can't read from file %s", argv[1]), exit(98);

	file_dest = open(argv[1], O_RDWR | O_CREAT | O_TRUNC, 0664);

	if (file_dest == -1)
		dprintf(2, "Error: Can't read from file %s", argv[2]), exit(98);

	/*Leemos y copiamos el archivo 1 file_1*/
	
	/*exit 100*/
	close_d = close(src);
	if (close == -1)
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from), exit(100);
	close_d = close(dest);
	if (close == -1)
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", to), exit(100);

	return (1);

}
