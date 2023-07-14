#include <stdio.h>

/**
 * main- print lower case alphabets in reverse orders
 * Return: zerro 0 (seccuss)
 */
int main(void)
{
	int i;

	char lettes[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h',
'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's',
't', 'u', 'v', 'w', 'x', 'y', 'z'};
for (i = 26; i > 0; i--)
{
	putchar(lettes[i - 1]);
}
return (0);
}
