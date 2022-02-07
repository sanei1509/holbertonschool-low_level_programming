#include "main.h"
/**
 *jack_bauer - return deppend of sign of n
 *
 */
void jack_bauer(void)
{
	int minutes;
	int seconds;

	for (minutes = 0; minutes <= 23; minutes++)
	{
		for (seconds = 0; seconds <= 59; seconds++)
		{
			_putchar((minutes / 10) + '0');
			_putchar((minutes % 10) + '0');
			_putchar(':');
			_putchar((seconds / 10) + '0');
			_putchar((seconds % 10) + '0');
			if (minutes <= 23)
			{
				_putchar('\n');
			}
		}
	}
}
