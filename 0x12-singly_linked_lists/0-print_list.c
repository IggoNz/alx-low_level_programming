#include <stdlib.h>
#include "lists.h"

/**
 * print_list - Prints all the elemens of a linked list
 * @h: pointer to the list list_h to be printed
 *
 * Return: the number of nodes being printed
 */
size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u]%s\n", h->len, h->str);
		h = h->next;
		s++;
	}
	return (s);
}
