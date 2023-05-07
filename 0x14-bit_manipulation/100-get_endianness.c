#include "main.h"

/**
 * get_endianness - checks the endianness of a machine whether it is big or small
 * Return: if the machine is big return 0, else if it is small return 1
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
/**
 * This code is used to check the endianness of a machine, which refers to the order in which data is stored in memory. If the machine is big-endian, then the data is stored with the most significant byte first, and if the machine is little-endian, then the data is stored with the least significant byte first.

The code creates an unsigned integer variable, 'i', and assigns it the value of 1. The code then creates a character pointer, 'c', and assigns it the address of 'i'. The code then returns the value of the character pointed to by 'c'. If the machine is big-endian, the value returned would be 0, and if the machine is little-endian, the value returned would be 1.
