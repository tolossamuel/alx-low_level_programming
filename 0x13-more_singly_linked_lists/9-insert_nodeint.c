#include "lists.h"

/**
 * insert_nodeint_at_index - a function that inserts a new node at
 *                           a given position
 *
 * @head: pointer to the first node of the list
 * @idx: is the index of the list where the new node should be added
 * @n: element to add to the new node
 *
 * Return: NULL if anything fails or the address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *temp, *now;

now = *head;

temp = malloc(sizeof(listint_t));
if ((*head == NULL && idx != 0) || temp == NULL)
	return (NULL);
temp->n = n;

for (int i = 0; now != NULL && i < idx - 1; i++)
{
	now = now->next;
	if (now == NULL)
		return (NULL);
}
if (idx == 0)
{
	temp->next = *head;
	*head = temp;
}
else if (now->next)
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
