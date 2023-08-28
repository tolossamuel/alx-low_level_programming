#include "lists.h"

/**
 * insert_nodeint_at_index - insert new node
 * @head: head of list
 * @idx: index
 * @n: int
 * Return: listint_t*
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *current, *index;
	unsigned int count = 0;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	index = *head;
	if (idx == 0)
		temp->next = index;
		*head = temp;
		return (temp);
	while (index)
		if (count + 1 == idx)
			temp->next = index->next;
			index->next = temp;
			return (temp);
		count++;
	count = 0;
	current = *head->next;
	index = head;
	while (count <= index)
		index = index->next;
		current = current->next;
	current->next = temp;
	temp->next = index;
	return (*head);
}
