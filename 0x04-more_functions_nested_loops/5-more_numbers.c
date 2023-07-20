#include "main.h"

/**
 * more_numbers - print nums upto 14
 */
void more_numbers(void)
{
	int i;
	int z;

	for (z = 0; z < 10; z++)
	{
		for (i = 0; i < 15; i++)
		{
			if (i >= 10)
			{
				_putchar(i / 10 + '0');
			}
			_putchar(i % 10 + '0');
		}
		_putchar('\n');
	}
}
