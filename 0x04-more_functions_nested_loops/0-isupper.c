#include "main.h"

/**
 *_isupper - check if the entry is upper or lowercase
 *@c: receive character
 *Return: 0
 */

int _isupper(int c)
{
	if(c >= 'a' && c <= 'z')
	{
		return (0);
	}	
	else if(c >= 'A' && c <= 'Z')
	{
		return (1);
	}
}
