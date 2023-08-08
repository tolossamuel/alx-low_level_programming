#include "main.h"
#include <stdio.h>

/**
 * create_array - alocate new momory place
 * @size: unsigned int
 * @c: value of variable
 * Return: memory alocations
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}
	p = (char *) malloc(sizeof(char) * size);
	if (p == NULL)
	{
		return (0);
	}
	while (i < size)
	{
		*(p + 1) = c;
		i++;
	}
	*(p + 1) = '\0';
	return (p);
}
