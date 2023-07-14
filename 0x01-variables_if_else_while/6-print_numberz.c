#include <stdio.h>

/**
 * main- print digits
 * only use putcher function not allow to use pritf
 * Return: zerro 0 (success)
 */
int main(void)
{
int i;

for (i = 48; i < 58; i++)
{
	putchar(i);
}
putchar('\n');
return (0);
}
