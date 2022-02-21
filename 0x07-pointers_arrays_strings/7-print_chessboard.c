#include "main.h"
#include <stdio.h>

/**
*print_chessboard - print a chessboard
*@a: received the array of char to recorrer
*/
void print_chessboard(char (*a)[8])
{
	int i = 0;
	int j = 0;

	for (i = 0;  i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			if (j == 7)
			{
			_putchar(a[i][j]);
			_putchar('\n');
			}
			else
			{
			_putchar(a[i][j]);
			}
		}
	}
}
