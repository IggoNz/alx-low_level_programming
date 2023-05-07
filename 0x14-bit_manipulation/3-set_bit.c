#include "main.h"

/**
 * set_bit - Used to set the value of a bit to 1 at any given index
 * @n: it points to the number being set
 * @index: refers to the index of interest
 * Return: if successful return 1, if unsuccessful return -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = ((1UL << index) | *n);
	return (1);
}
/**
 * This is a function that sets the value of a bit to 1 at a given index.
The function takes in two parameters, n and index. n is a pointer to the number being set and index is the index of the bit being set.
If the index is greater than 63, the function will return -1. Otherwise, it will set the value of the bit at the index to 1 and return 1.
 what does this statement in the code mean, *n = ((1UL << index) | *n);

This statement sets the value of the bit at the specified index to 1. The 1UL is a long unsigned integer with a value of 1. The (1UL << index) shifts the 1UL over index positions, so if the index is 2, the 1UL will be shifted 2 places to the left. The | operator then combines the shifted 1UL with the current value of n, setting the bit at the index position to 1.
