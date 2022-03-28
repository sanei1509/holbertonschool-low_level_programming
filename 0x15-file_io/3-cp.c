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
	char ch, *buf1;

	buf1 = malloc(sizeof(char) * 1024);

	/*exit 97*/
	/*incorrect number of args*/
	if (argc != 3)
		exit(97);

	file_src = fopen(argv[1], "r");
	if (buf1 == NULL)
		dprintf(2, "Can't write to %s", argv[1]), exit(99);
	if (file_src == NULL)
		dprintf(2, "Error: Can't read from file %s", argv[1]), exit(98);
	/*creamos el primer archivo*/
	open(argv[1], O_RDWR | O_CREAT | O_TRUNC, 0664);

	file_dest = fopen(argv[2], "w");

	if (buf1 == NULL)
		dprintf(2, "Can't write to %s", argv[2]), exit(99);
	if (file_dest == NULL)
		dprintf(2, "Error: Can't read from file %s", argv[2]), exit(98);

	/*Leemos y copiamos el archivo 1 file_1*/
	while ((ch = fgetc(file_src)) != EOF)
	{
		fputc(ch, file_dest);
		ch = fgetc(file_src);
	}
	/*exit 100*/
	fclose(file_src);
	fclose(file_dest);
	return (1);

}
