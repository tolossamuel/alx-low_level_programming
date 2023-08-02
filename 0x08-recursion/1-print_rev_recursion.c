#include "main.h"

/**
 * _print_rev_recursion - print string in the reverse order
 * @s: variable of string
*/
void _print_rev_recursion(char *s)
{
	if (*s != '\n')
	{
		_putchar(s + 1);
		_print_rev_recursion(*s);
	}
}
