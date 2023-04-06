#include "main.h"

/**
 * _strlen_recursion - a function that returns the length of a string
 * @s: the string being decoded
 * Return: the string length
 */
int _strlen_recursion(char *s)
{
	int longs = 0;

	if (*s)
	{
		longs++;
		longs += _strlen_recursion(s + 1);
	}
	return (longs);
}
