#include "main.h"

/**
 * puts2 - print the string after the second one
 * @str: string
 */
void puts2(char *str)
{
	int i, len;

	len = 0;
	i = 0;
	while (str[len] != '\0')
	{
		len += 1;
	}
	while (i < len)
	{
		_putchar(str[i])
		i += 2;
	}
	_putchar('\n');
}
