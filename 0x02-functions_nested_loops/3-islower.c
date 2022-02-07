#include "main.h"
#include <ctype.h>
/**
 *_islower - return 1 if c is lowercase else return 0
 */
int _islower(int c)
{
	if (islower(c) == 1)
	{
		return (0);
	}
	else if(islower(c) >= 0)
	{
		return(1);
	}

}
