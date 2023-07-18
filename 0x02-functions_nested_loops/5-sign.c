#include <stdio.h>
#include "main.h"

/**
 * print_sign - print the sign of the number
 * @n: value for the functions
 * Return: 1 if the n > 0 -1 if n<0 and 0 n==n
 */
int print_sign(int n)
{
if (n > 0)
{
	_putchar('+');
	return (1);
}
else if (n == 0)
{
	_putchar(48);
	return (0);
}
else
{
	_putchar('-');
}
return (-1);
}
