#include "lists.h"

/**
 * insert_nodeint_at_index - a function that inserts a new node at
 * @head: pointer to the first node of the list
 * @idx: is the index of the list where the new node should be added
 * @n: element to add to the new node
 * Return: NULL if anything fails or the address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *index;
	unsigned int index;

	index = *head;
	temp = malloc(sizeof(listint_t));
	if ((*head == NULL && idx != 0) || temp == NULL)
		return (NULL);
	temp->n = n;
	for (index = 0; head != NULL && index < idx - 1; index++)
	{
		index = index->next;
		if (index == NULL)
			return (NULL);
	}

	if (index->next)
	{
		temp->next = index->next;
		index->next = temp;
	}
	else if (idx == 0)
	{
		temp->next = *head;
		*head = temp;
	} else
	{
		temp->next = NULL;
		index->next = temp;
	}
	return (temp);
}
