#include "lists.h"

/**
 * print_listint - a function that prints all the elements
 * in the list listint_t
 * @h: the linked list of type listint_t which is to be
 * printed
 * Return: the amount/number of the nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}
	return (num);
}
