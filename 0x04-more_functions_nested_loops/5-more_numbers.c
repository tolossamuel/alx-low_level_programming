#include "main.h"

/**
 * more_numbers - print nums upto 14
 * Return:
 */
void more_numbers(void)
{
	int i;
	int y;
	int z;

	for (z = 0; z < 10; z++)
	{
		y = 48;
		for (i = 48; i < 53; i++)
		{
			if (i < 58)
			{
				_putchar("%d", i);
			}
			else
			{
				_putchar("%d", 49);
				_putchar('%d', y)
				y++;
			}
		}
	}
}
