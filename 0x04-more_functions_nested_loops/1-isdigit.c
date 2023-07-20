#include "main.h"

/**
 * _isdigit - check if digit or not
 * @c: the value of ascii code
 * Return: 1 if digit or 0 if not digit
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 58)
	{
		return (1);
	}
	return (0);
}
