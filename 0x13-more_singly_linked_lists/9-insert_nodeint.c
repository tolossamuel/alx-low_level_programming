#include "lists.h"

/**
 * insert_nodeint_at_index - a function that inserts a new node at
 *                           a given position
 *
 * @head: pointer to the first node of the list
 * @idx: is the index of the list where the new node should be added
 * @n: element to add to the new node
 * Return: NULL if anything fails or the address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *temp, *now, *index;

now = *head;

temp = malloc(sizeof(listint_t));
temp->n = n;
if (*head == NULL && idx != 0)
	return (NULL);
else if (*head == NULL && idx == 0)
{
	*head = temp;
	(*head)->next = NULL;
	return (*head);
}
else if (idx == 0)
{
	temp->next = *head;
	*head = temp;
	return (*head);
}
for (unsigned int i = 0; i < idx - 1; i++)
{
	if (now->next == NULL)
		return (NULL);
	now = now->next;
}
if (now->next)
{
	temp->next = now->next;
	now->next = temp;
}
else
{
	temp->next = NULL;
	now->next = temp;
}
return (temp);
}
