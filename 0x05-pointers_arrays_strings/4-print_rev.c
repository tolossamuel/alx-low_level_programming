#include "main.h"

/**
 * print_rev - reverse the string
 * @s: strings
 */
void print_rev(char *s)
{
	int i, x;

	i = 0;
	while (s[i] != '\0')
	{
		i += 1;
	}
	for (x = i; x > 0; x++)
	{
		_putchar(s[x - 1]);
	}
	_putchar(\n);
}
