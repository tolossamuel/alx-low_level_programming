#include "lists.h"

/**
 * insert_nodeint_at_index - that inserts new node at a given position.
 * @head: pointer to the first node
 * @idx: index of node
 * @n: value of new node
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new_node = malloc(sizeof(listint_t));

if (new_node == NULL)
	return (NULL);

new_node->n = n;
new_node->next = NULL;

if (idx == 0)
{
	new_node->next = *head;
	*head = new_node;
}
else
{
	listint_t *tmp = *head;
	unsigned int i = 0;

	while (i < idx - 1)
	{
		tmp = tmp->next;
		i++;
	}
	new_node->next = tmp->next;
	tmp->next = new_node;
}
return (new_node);
}
