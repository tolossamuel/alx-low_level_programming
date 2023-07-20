#include "main.h"

/**
 * print_triangle - print triangel on the terminal
 * @size: value of height and lenght of triangle
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = (size - 1); j > i; j--)
			{
				_putchar(' ');
			}
			_putchar('#');
			_putchar('\n');
		}
	}
}
