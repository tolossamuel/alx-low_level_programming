#include <stdio.h>
#include "lists.h"

/**
 * reverse_listint - function that reverses a listint_t linked list.
 * You are not allowed to use malloc, free or arrays
 * You can only declare a maximum of two variables in your function
 * @head: pointer to the first node
 * Return: pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev;
	listint_t *next_node;

	prev = NULL;
	next_node = NULL;
	while (*head != NULL)
	{
		next_node = *head->next;
		*head->next = prev;
		prev = *head;
		*head = next_node;
	}
	*head = prev;
	return (*head);
}
