#include "lists.h"

/**
 * sum_listint - determines the sum of all the data
 * contained in a list listint_t which is linked
 * @head: indicates the 1st node in the linked list
 * Return: the sum being determined
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
