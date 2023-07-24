#include "main.h"

/**
 * puts_half - print hafe of the string
 * @str: strings
 */
void puts_half(char *str)
{
	int i, x;

	while (str[i] != '\0')
	{
		i += 1;
	}
	x = (i - 1) / 2;
	while (x != i)
	{
		_putchar(str[x]);
		x += 1;
	}
	_putchar('\n');
}
