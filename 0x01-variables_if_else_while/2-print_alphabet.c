#include <stdio.h>

/**
 * main- print letters
 * Return: zero 0 (sus)
 */
int main(void)
{
char letter[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h',
'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's',
't', 'u', 'v', 'w', 'x', 'y', 'z'};
int i;
for (i = 0; i < 26; i++)
{
	putchar(letter[i]);
}
return (0);
}
