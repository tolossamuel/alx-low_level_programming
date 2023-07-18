#include "main.h"

/**
 * jack_bauer - print evry minut
 * Return:
 */
void jack_bauer(void)
{
int n, m, x, y;

for (n = 0; n < 3; n++)
{
	for (m = 0; m < 10; m++)
	{
		for (x = 0; x < 6; x++)
		{
			for (y = 0; y < 10; y++)
			{
				if (n != 2 && m != 3 && x != 5 && y != 9)
				{
					_putchar(n);
					_putchar(m);
					_putchar(':');
					_putchar(x);
					_putchar(y);
					_putchar('\n');
				}
			}
		}
	}
}
_putchar(n);
_putchar(m);
_putchar(':');
_putchar(x);
_putchar(y);
_putchar('\n');
}
