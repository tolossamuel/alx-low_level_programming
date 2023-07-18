#include "main.h"

/**
 * print_to_98 - check the char is letter or not
 * @n: the value of int
 * Return:
 */
void print_to_98(int n)
{
int i;

if (n >= 98)
{
	for (i = n; i >= 98; i--)
	{
		_putchar(i + '0');
		_putchar(',');
		_putchar(' ');
	}
	_putchar('\n');
}
else if (n < 98)
{
	for (i = n; i <= 98; i++)
	{
		_putchar(i + '0');
		_putchar(',');
		_putchar(' ');
	}
	_putchar('\n');
}
}
