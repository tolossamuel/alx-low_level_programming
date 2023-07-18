#ifndef _HEADER_FILE_NAME_H_
#define _HEADER_FILE_NAME_H_

/**
 * print_alphabet - print alphabets
 * Return: zero (0)
 */
void print_alphabet(void)
{
char letter;

for (letter = 97; letter < 123; letter++)
{
	_putchar(letter);
}
_putchar('\n');
}

#endif
