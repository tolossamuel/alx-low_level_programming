#include "main"

/**
 * print_alphabet_x10 - print 10 time alphabets
 * Return: None
 */
void print_alphabet_x10(void)
{
char letter;
int i;

for (i = 0; i < 10; i++)
{
	for (letter = 97; letter < 123; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}
}
