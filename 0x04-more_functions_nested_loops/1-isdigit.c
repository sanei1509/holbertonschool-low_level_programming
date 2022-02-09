#include "main.h"

/**
 *_isdigit - check if the entry is upper or lowercase
 *@c: receive character
 *Return: 0
 */

int _isdigit(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <='Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
