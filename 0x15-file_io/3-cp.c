#include "main.h"
/**
 *main - copy file 1 into file 2
 *@argc: count of arguments
 *@argv: array with arguments
 * Return: 1
 */

int main(int argc, char *argv[])
{
	int file_src,  file_dest;
	char buf[1024];
	int read_res, write_res, close_d;

	/*incorrect number of args*/
	if (argc != 3)
		dprintf(2, "Usage: cp file_from file_to\n"), exit(97);

	file_src = open(argv[1], O_RDONLY);
	if (file_src == -1)
		dprintf(2, "Error: Can't read from file %s\n", argv[1]), exit(98);
	file_dest = open(argv[1], O_RDWR | O_CREAT | O_TRUNC, 0664);
	/*exit 99*/
	if (file_dest == -1)
		dprintf(2, "Error: Can't write %s\n", argv[2]), exit(99);
	/*Leemos y copiamos el archivo 1 file_1*/
	read_res = read(file_src, buf, 1024);
	while (read_res != 0)
	{
		if (read_res == -1)
			dprintf(2, "Error: Can't read from file %s\n", argv[1]), exit(98);
	/*escribimos lo leido dentro del file_2 de en buf hasta count*/
		write_res = write(file_dest, buf, read_res);
		if (write_res)
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
