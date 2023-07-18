#include "main.h"

/**
 * _isalpha - check the char is letter or not
 * @c: char value for the functions
 * Return: 1 if the char are letter else is 0
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
	return (1);
}
else
{
	return (0);
}
}
