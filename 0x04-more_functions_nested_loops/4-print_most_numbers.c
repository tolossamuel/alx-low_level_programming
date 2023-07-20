#include "main.h"

/**
 * print_most_numbers - print numbers except 2 and 4
 * Return:
 */
void print_most_numbers(void)
{
	int i;

	for (i = 48; i < 49; i++)
	{
		if (i != 50 && i != 52)
		{
			_putchar('%d', i);
		}
	_putchar('\n');
	}
}
