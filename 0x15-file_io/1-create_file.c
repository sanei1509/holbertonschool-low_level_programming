#include "main.h"

/**
 *create_file - create a file
 *@filename: name of the file
 *@text_content: content of the new file
 *Return: 1 on succes | -1 on fails
 */

int create_file(const char *filename, char *text_content)
{
	int len_content = 0;
	int file_d, write_rt;

	if (filename == NULL)
	{
		close(file_d);
		return (-1);
	}
	if (text_content == NULL)
		text_content = "";

	file_d = open(filename, O_CREAT | O_RDONLY | O_TRUNC, 0600);
	if (file_d == -1)
	{
		return (-1);
	}

	len_content = strlen(text_content);

	write_rt = write(file_d, text_content, len_content);

	if (write_rt == -1)
	{
		close(file_d);
		return (-1);
	}
	close(file_d);
	return (1);
}
