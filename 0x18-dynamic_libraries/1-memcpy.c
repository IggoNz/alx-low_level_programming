#include "main.h"

/**
 * *_memcpy - a function that copies memory area
 * @dest: destination memory
 * @src: origin memory to be copied
 * @n: number of times to copy
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r;
	int i = n;

	for (r = 0; n > 0; r++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}

