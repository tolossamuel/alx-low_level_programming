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
listint_t *new_node = malloc(sizeof(listint_t));

if (new_node == NULL)
return (NULL);
new_node->n = n;
new_node->next = NULL;

if (*head == NULL)
{
*head = new_node;
return (*head);
}
listint_t *temp = *head;
listint_t *prev = NULL;

for (unsigned int i = 0; i < idx; i++)
{
prev = temp;
temp = temp->next;
}
new_node->next = temp;
prev->next = new_node;
return (*head);
}

