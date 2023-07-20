#include "main.h"

/**
 * _isupper - check the letter is upper or not
 * @c: the value of char ascii
 * Return: 1 if is upper or 0 is not upper
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
