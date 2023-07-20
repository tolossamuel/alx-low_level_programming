#include "main.h"

/**
 * print_diagonal - print line  in the terminal
 * use _ like line in ur code
 * @n: value for the length of line
 */
void print_diagonal(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
