#include "lists.h"

/**
 * pop_listint - used to delete the head note of a linked list listint_t
 * @head: points to the first element of the linked list
 * Return: the data which is inside the deleted elements if success
 * else return 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
