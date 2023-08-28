#include "lists.h"

/**
 * free_listint2 - a function that frees the list and sets head to NULL
 * @head: pointer to the first node
 * Return: nothing
*/
void free_listint2(listint_t **head)
{
listint_t *tmp, *index;
if (*head != NULL)
{
index = *head;
while (index != NULL)
{

tmp = index;
index = index->next;
free(tmp);
}
}
}
