#include <stdio.h>

/**
 * print_sign - print the sign of the number
 * @n: value for the functions
 * Return: 1 if the n > 0 -1 if n<0 and 0 n==n
 */
int print_sign(int n)
{
if (n > 0)
{
	return (1);
}
else if (n == 0)
{
	return (0);
}
else
{
	return (-1);
}
}
