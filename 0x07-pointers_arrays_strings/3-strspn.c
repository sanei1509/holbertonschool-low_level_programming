#include "main.h"

/**
*_strspn - |:wq
*@s:
*@accept:
*/

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int length = 0;
	
	while (*s != '\0')
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s != ' ')
			{
				if(accept[i] == *s)
				{
					length++;
				}
			}

		}
		s++;
	}
	return (length - 2);
}
