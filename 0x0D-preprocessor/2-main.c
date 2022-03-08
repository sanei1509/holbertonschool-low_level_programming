#ifndef _FILE_NAME_DEFINITION
#define _FILE_NAME_DEFINITION

#define file_name __FILE__

#endif
#include <stdio.h>
/**
 *main - print current file name
 *Return: 0
 */

int main(void)
{
	printf("%s\n", file_name);
	return (0);
}
