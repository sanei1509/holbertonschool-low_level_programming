#include "main.h"

/**
 *append_text_to_file - appends text at the end of a file
 *@filename: name of the file
 *@text_content: content to copy
 *Return: 1 on succes or -1 in fail
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int len_content = 0;
	int file_d, write_rt;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (1);

	file_d = open(filename, O_WRONLY | O_APPEND);

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
