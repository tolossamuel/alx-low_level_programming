#include "main.h"

/**
 * _strlen - find the lenght of string
 * @s: string
 * Return: the value of length of string
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i += 1;
	}
	return (i);
}
