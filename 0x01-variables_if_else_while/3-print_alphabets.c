#include <stdio.h>
#include <ctype.h>

/**
 * main- print alphabets
 * Return: Zerro 0 (Success)
 */
int main(void)
{
int i;

char letter[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h',
'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's',
't', 'u', 'v', 'w', 'x', 'y', 'z'};

for (i = 0; i < 26; i++)
{
	putchar(letter[i]);
}
for (i = 0; i < 26; i++)
{
	letter[i] = toupper(letter[i]);
	putchar(letter[i]);
}
return (0);
}
