#include <stdio.h>
#include "lists.h"

/**
 * print_listint_safe - function that prints a listint_t linked list.
 * You should go through the list only once
 * @head: variable of linked list
 * Return: the number of nodes in the list
 * If the function fails, exit the program with status 98
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t i = 0;

	if (!head)
		return (0);
	while (head)
	{
		printf("%d\n", head->n);
		i++;
		head = head->next;
	}
	return (i);
}
