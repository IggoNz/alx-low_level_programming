#include "main.h"

/**
 * *_strpbrk - a function that searches a string for any set of bytes
 * @s: initial string
 * @accept: second string being searched
 * Return: a function that searches a string for any of a set of bytes
 * else returns NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}
		s++;
	}
	return ('\0');
}
