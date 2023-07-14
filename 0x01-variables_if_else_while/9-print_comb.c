#include <stdio.h>

/**
 * main- combinations of single digits
 * Return: zero (0)
 */
int main(void)
{
int i;

for (i = 0; i < 10 ; i++)
{
	putchar(48 + i);
	if (i < 9)
	{
		putchar(44);
		putchar(' ');
	}
}
putchar('\n');
return (0);
}
