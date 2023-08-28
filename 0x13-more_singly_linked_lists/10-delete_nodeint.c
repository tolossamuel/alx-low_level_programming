#include "lists.h"

/**
 * delete_nodeint_at_index- a function that deletes the node at index
 * @head: pointer to the first node
 * @index: index of node
 * Return: 1 if it succeeded, -1 if it failed
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *tmp = *head;
listint_t *prev = NULL;
unsigned int i = 0;

while (tmp != NULL && i < index)
{
prev = tmp;
tmp = tmp->next;
i++;
}
if (tmp == NULL)
return (-1);
if (prev == NULL)
*head = tmp->next;
else
prev->next = tmp->next;
free(tmp);
return (1);
}
