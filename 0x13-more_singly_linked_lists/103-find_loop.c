#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: head of a list.
 * Return: the address of the node where the loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow = head;
	listint_t *fast = head;

	while (head && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
		{
			slow = head;
			head = fast
			while (1)
			{
				head = fast;
				while (fast->next != slow && fast->next != head)
				{
					fast = fast->next;
				}
				if (fast->next == slow)
				{
					break;
				}
				slow = slow->next;
			}
			return (fast->next);
		}
	}
	return (NULL);
}
