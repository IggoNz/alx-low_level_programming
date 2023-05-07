#include "main.h"

/**
 * clear_bit - used to set the value of a bit at any
 * given position to 0
 * @n: pointer pointing to the number which is being changed
 * @index: index of the bit which is being set to 0
 * Return: if successful 1, else return -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = (-(1UL << index) & *n);
	return (1);
}
