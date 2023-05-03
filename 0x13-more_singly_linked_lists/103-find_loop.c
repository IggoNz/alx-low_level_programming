#include "lists.h"

/**
 * find_listint_loop - locates the loop in the linked list
 * @head: points to the first location of the node
 * in the linked list
 * Return: if successful, the address of the node at the
 * start point of the loop, else return NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow = head;
	listint_t *fast = head;

	if (!head)
		return (NULL);
	while (slow && fast && fast->next)
	{
		fast = fast->next->next;
		slow = slow->next;
		if (fast == slow)
		{
			slow = head;
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}
			return (fast);
		}
	}
	return (NULL);
}
