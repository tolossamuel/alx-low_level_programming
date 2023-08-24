#include <stdio.h>
#include "lists.h"

/**
 * print_list - print element of linked list
 * @h: node of the linked list
 * Return: element
 */
size_t print_list(const list_t *h)
{
size_t element;

element = 0;
while (h != NULL)
{
	if (h->str != NULL)
	{
		printf("[%lu] %s\n", h->len, h->str);
	} else
	{
		printf("[0] (nil)\n");
	}
h = h->next;
element++;
}
return (element);
}
