#include <stdio.h>

/**
 * main- print alphabets
 * except e and q
 * Return: zerro 0 (success)
 */
int main(void)
{
int i;

char letter[] = {'a', 'b', 'c', 'd', 'f', 'g', 'h',
'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'r', 's',
't', 'u', 'v', 'w', 'x', 'y', 'z'};
for (i = 0; i < 24; i++)
{
	putchar(letter[i]);
}
return (0);
}
