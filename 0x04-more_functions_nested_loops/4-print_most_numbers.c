#include "main.h"

/**
 * print_most_numbers - print numbers except 2 and 4
 * Return:
 */
void print_most_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		if (i != 50 && i != 52)
		{
			_putchar(i + '0');
		}
	_putchar('\n');
	}
}
