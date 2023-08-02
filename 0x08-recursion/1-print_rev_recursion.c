#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 *
 * @s: string
*/
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));
	else
		return (0);
}
