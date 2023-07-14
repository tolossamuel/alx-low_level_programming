#include <stdio.h>

/**
 * main- printf all hexadecimal number
 * less than 16 0123456789abcdef
 * Return: zero 0 (success)
 */
int main(void)
{
int i;

char hex[] = {'a', 'b', 'c', 'd', 'e', 'f'};
for (i = 0; i < 16; i++)
{
	if (i < 10)
	{
		putchar(48 + i);
	}
	else
	{
		putchar(hex[i - 10]);
	}
}
putchar('\n');
return (0);
}
