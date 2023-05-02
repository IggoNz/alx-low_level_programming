#include "lists.h"

/**
 * add_nodeint_end - it adds a node at the end of
 * a listint_t list
 * @head: points to the 1st element in listint_t list
 * @n: refers to the data which is to be added into
 * the new element
 * Return: if successful, pointer to the new node,
 * it it fails return NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (temp->next)
		temp = temp->next;
	temp->next = new;

	return (new);
}
