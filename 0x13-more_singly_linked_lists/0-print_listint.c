#include <stdio.h>
#include "lists.h"

/**
 * print_listint - function that prints all the elements of a listint_t list
 * @h: variable of linked list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count;

	count = 1;
	if (h == null)
	{
		return (0);
	}
	while (h->next != null)
	{
		printf("%d\n", h->n);
		h = h->next;
		count += 1;
	}
	printf("%d\n", h->n);
	return (count);
}
