#include "lists.h"

/**
 * pop_listint - deletes head of the node
 * @head: pointer to the first node in the list
 * Return: the head's node's data (n)
 */
int pop_listint(listint_t **head)
{
listint_t *tmp;

if (*head == NULL)
return (0);
tmp = *head;
*head = (*head)->next;
free(tmp);
return (tmp->n);
}
