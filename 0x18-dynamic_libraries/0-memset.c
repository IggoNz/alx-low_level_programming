#include "main.h"

/**
 * *_memset - a function that fills memory with a constant byte
 * @s: starting adress of memory to be filled.
 * @b: the character to be copied.
 * @n: number of times to copy n
 * Return: an array with changed n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
