#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node in a
 * particular given position
 * @head: points to the 1st node in the list listint_t
 * @idx: defines the index where the new node will be
 * added.
 * @n: defines the data to be added in the new node
 * Return: the address of the new node if succesful
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new;
	list_int *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	for (i = 0; temp && i < idx; i++)
	{
		if (i == idx - 1)
		{
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
		else
			temp = temp->next;
	}
	return (NULL);
}
