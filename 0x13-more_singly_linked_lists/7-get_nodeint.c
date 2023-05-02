#include "lists.h"

/**
 * get_nodeint_at_index - used to return the nth
 * node of a linked list in listint_t
 * @head: refers to the first node in the linked list
 * @index: the index of the node which is to be returned
 * Return: the pointer to the node being looked for if successful
 * else return NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}
	return (temp ? temp : NULL);
}
