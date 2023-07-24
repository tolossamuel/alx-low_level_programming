#include "main.h"

/**
 * swap_int - swap the value  of the variables
 * @a: value 1
 * @b: value 2
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
