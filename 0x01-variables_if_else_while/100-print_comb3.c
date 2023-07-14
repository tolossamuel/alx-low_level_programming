#include <stdio.h>

/**
 * main- print combinations of 2 numbers
 * Return: zero (0)
 */
int main(void)
{
int n, m;

for (n = 48; n < 58; n++)
{
	for (m = 48; m < 58; m++)
	{
		if (m > n)
		{
			putchar(n);
			putchar(m);
			if (n != 57)
			{
				putchar(44);
				putchar(' ');
			}
		}
	}
}
putchar('\n');
return (0);
}
