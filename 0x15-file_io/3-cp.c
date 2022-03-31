#include "main.h"
/**
 *main - copy file 1 into file 2
 *@argc: count of arguments
 *@argv: array with arguments
 * Return: 1
 */

int main(int argc, char *argv[])
{
	int file_src = 0,  file_dest = 0;
	int read_res = 0, write_res = 0, close_d = 0;
	char buf[1024];

	/*incorrect number of args*/
	if (argc != 3)
		dprintf(2, "Usage: cp file_from file_to\n"), exit(97);

	file_src = open(argv[1], O_RDONLY);
	if (file_src == -1)
		dprintf(2, "Error: Can't read from file %s\n", argv[1]), exit(98);

	file_dest = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	if (file_dest == -1)
		dprintf(2, "Error: Can't write to %s\n", argv[2]), exit(99);

	while ((read_res = read(file_src, buf, 1024)) != 0)
	{
		if (read_res == -1)
			dprintf(2, "Error: Can't read from file %s\n", argv[1]), exit(98);

		write_res = write(file_dest, buf, read_res);

		if (write_res == -1)
			dprintf(2, "Error: Can't write to %s\n", argv[2]), exit(99);
	}
	/*exit 100*/
	close_d = close(file_src);
	if (close_d == -1)
		dprintf(2, "Error: Can't close fd %d\n", file_src), exit(100);
	close_d = close(file_dest);
	if (close_d == -1)
		dprintf(2, "Error: Can't close fd %d\n", file_dest), exit(100);

	return (0);
}
