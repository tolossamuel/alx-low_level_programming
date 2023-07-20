#include "main.h"

/**
 * print_diagonal - print space between the character
 * @n: value of space
*/
void print_diagonal(int n)
{
	int i;
	int x;

	if (n <= 0)
	{
		_putchar("\n");
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			for (x = 1; x < i; x++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
