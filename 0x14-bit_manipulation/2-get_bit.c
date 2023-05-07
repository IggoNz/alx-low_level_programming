#include "main.h"

/**
 * get_bit - used to get the value of a bit at a given specified index
 * @n: the number being searched
 * @index: the respective index of the bit
 * Return: the bit value.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);
	bit_val = (n >> index) & 1;
	return (bit_val);
}
/**
 * This code is used to get the value of a bit at a given specified index. The function takes two parameters, an unsigned long int n and unsigned int index. The function first checks if the index is greater than 63 and if it is, returns -1. If it isn't it then sets the bit_val variable to the result of n shifted right by the index and then and-ed with 1. Finally, the function returns the bit_val variable.
why does it check if the index is greater than 63

The reason this code checks if the index is greater than 63 is because the maximum number of bits in an unsigned long int is 64, so it's necessary to check that the index isn't greater than the maximum number of bits.
what is int bit_val?

int bit_val is a variable used to store the value of the bit at the given index.
