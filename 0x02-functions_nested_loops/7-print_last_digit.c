#include "main.h"

/**
 * print_last_digit - print the last digit of the number
 * @n: the valu of the int
 * Return: the value of of int
 */
int print_last_digit(int n)
{
while (n > 10 || n < -10)
{
	n = n % 10;
}
n = n * 11;
return (n);
}
