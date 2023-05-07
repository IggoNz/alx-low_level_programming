#include "main.h"

/**
 * print_binary - used to print the binary representation
 * of a given decimal number
 * @n: the decimal number to be printed in binary
 * Return: the printed binary decimal number
 */
void print_binary(unsigned long int n)
{
	int i, count = 0;

	unsigned long int current;

	for (i = 63; i >= 0; i--)
	{
		current >> i;
		if (current & 1)
		{
			_putchar ('1');
			count++;
		}
		else if (count)
			_putchar ('0);
	}
	if (!count)
		_putchar ('0);
}

/**
 * This code is used to convert a decimal number to binary.
It starts by declaring two variables, i (which will be used as a counter) and count (which will keep track of the number of binary digits printed).
It then enters a for loop that runs for 63 iterations, each time shifting the value of n to the right by one bit.
The if statement checks if the shifted value of n has a one in the least significant bit position.
If it does, the _putchar() function is used to print a '1' character and the count variable is incremented.
If it doesn't, the _putchar() function is used to print a '0' character, but only if the count variable is greater than 0.
Finally, if the count variable is 0, the _putchar() function is used to print a '0' character.
