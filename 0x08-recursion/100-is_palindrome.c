#include "main.h"

/**
 * is_palindrome - a function that returns 1 if a
 * string is a palindrome and 0 if not
 * @s: string
 * Return:1 if a string is a palindrome and 0 if not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - checks the length of a string
 * @s: the string
 * Return: string length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - checks palindrom in a string
 * @i: iteration
 * @s: string to check
 * @len: length of string
 * Return: 1 if palindrome, else 0
 */
int check_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_pal(s, i + 1, len - 1));
}


