#include "lists.h"

/**
 * delete_nodeint_at_index- a function that deletes the node at index
 * @head: pointer to the first node
 * @index: index of node
 * Return: 1 if it succeeded, -1 if it failed
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *new_node, *current;
	unsigned int index;

	current = *head;
	new_node = malloc(sizeof(listint_t));
	if ((*head == NULL && idx != 0) || new_node == NULL)
		return (NULL);
	new_node->n = n;
	for (index = 0; head != NULL && index < idx - 1; index++)
	{
		current = current->next;
		if (current == NULL)
			return (NULL);
	}
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else if (current->next)
	{
		new_node->next = current->next;
		current->next = new_node;
	}
	else
	{
		new_node->next = NULL;
		current->next = new_node;
	}

	return (new_node);
}
