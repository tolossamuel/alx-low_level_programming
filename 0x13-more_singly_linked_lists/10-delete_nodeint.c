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

	current = *head; /*place first node at current*/

	new_node = malloc(sizeof(listint_t));
	if ((*head == NULL && idx != 0) || new_node == NULL)
		return (NULL);

	new_node->n = n; /* add our element to the new node*/

	/*iterate list to node position idx - 2*/
	for (index = 0; head != NULL && index < idx - 1; index++)
	{
		current = current->next;
		if (current == NULL)
			return (NULL);
	}

	if (idx == 0) /*if the index for new node is 0*/
	{
		/*first node will be moved to second node*/
		new_node->next = *head;
		/*new node will be placed as the first node*/
		*head = new_node;
	}
	else if (current->next) /*if index where to add our new node is not 0*/
	{
		new_node->next = current->next; /*place current node after new node*/
		current->next = new_node;/*set the new node at index idx*/
	}
	else /*if node position is not present in the list*/
	{
		new_node->next = NULL;/*set next addr as NULL, indicates last node*/
		current->next = new_node;/*set the new node at the last position in list*/
	}

	return (new_node);
}
