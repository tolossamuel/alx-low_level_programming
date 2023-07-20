#include "main.h"

/**
 * more_numbers - print nums upto 14
 */
void more_numbers(void)
{
	int i;
	int y;
	int z;

	for (z = 0; z < 10; z++)
	{
		y = 0;
		for (i = 0; i < 14; i++)
		{
			if (i < 10)
			{
				_putchar(i + '0');
			}
			else
			{
				_putchar(1 + '0');
				_putchar(y + '0');
				y++;
			}
		}
	}
	_putchar('\n');
}
