#include "main.h"

/**
 * print_numbers - print 0 upto 9
 * Return:
 */
void print_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		_putchar("%d", i);
	}
	_putchar('\n');
}
