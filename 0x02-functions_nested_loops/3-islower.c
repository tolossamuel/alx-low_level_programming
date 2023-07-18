#include "main.h"

/**
 * _islower - check the letter is lower or not
 * @c: The character to be checked.
 * Return: 1 if is lower else 0
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
	return (1);
else
	return (0);
}
