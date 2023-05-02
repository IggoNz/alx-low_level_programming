#include "lists.h"

/**
 * free_listint2 - used to free listint_t, a linked list
 * @head: it is a pointer to the listint_t which is to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	*head = NULL;
}
