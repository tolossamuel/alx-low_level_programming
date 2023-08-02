#include "main.h"

/**
 * _print_rev_recursion - print string in the reverse order
 * @s: variable of string
*/
void _print_rev_recursion(char *s)
{
	if (*s != '\n')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
