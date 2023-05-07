#include "main.h"

/**
 * flip_bits - used to return the number of bits which need
 * to be flipped in order to move from one number to another
 * @n: the first number to be flipped
 * @m: the second number to be flipped
 * Return: the number of bits being changed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current = exclusive >> i;
		if (current & 1)
			count++;
	}
	return (count);
}
/**
// * This code is used to calculate the number of bits which need to be flipped in order to move from one number to another. It takes two numbers as parameters, n and m, and uses the exclusive OR operator '^' to compare the two numbers. It then uses a for loop to check each bit of the new number and count the number of bits which are different. Finally, the function returns the count which is the number of bits which need to be flipped.
what does int i, count mean?

//Int i, count is a declaration for two integer variables. The first one is called 'i' and will be used to keep track of the loop index, while the second is called 'count' and will be used to keep track of the number of bits which are different.
what does unsigned long int current;
        unsigned long int exclusive = n ^ m;
mean?

This is a declaration of two unsigned long integer variables. The first one is called 'current' and will be used to store the current bit being checked. The second one is called 'exclusive' and is created by using the exclusive OR operator '^' to compare the two numbers, n and m, and store the result in the variable.
