#include "main.h"

/**
 * print_diagonal - print line  in the terminal
 * use _ like line in ur code
 * @n: value for the length of line
 */
void print_diagonal(int n)
{
	int i;

	if (i <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
