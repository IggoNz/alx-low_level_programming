#include "lists.h"

/**
 * reverse_listint - used to reverse the linked list listint_t
 * @head: points to the 1st node in the linked list listint_t
 * Return: the pointer to the first node in the created list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return (*head);
}
