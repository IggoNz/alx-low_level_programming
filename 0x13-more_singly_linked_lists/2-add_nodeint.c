#include "lists.h"

/**
 * add_nodeint - a function that adds a node at the beginning
 * of a linked list
 * @head: a pointer pointing to the 1st node in the list
 * @n: the data which is to be inserted in the new node
 * Return: if successful return the pointer to the new node.
 * if it fails return NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
