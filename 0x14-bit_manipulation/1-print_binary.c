#include <stdio.h>
#include "main.h"

/**
 * print_binary - function that prints the binary representation of number
 * You are not allowed to use arrays
 * You are not allowed to use malloc
 * You are not allowed to use the % or / operators
 * @n: value for binary numbers
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	if (n >> 0)
	{
		if (n >> 1)
			print_binary(n >> 1);
		_putchar((n & 1) + '0');
	}
	else
	{
		_putchar('0');
	}
}
