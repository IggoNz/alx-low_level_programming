#include "main.h"

/**
 * _strcat - a function that concatenates 2 strings
 * @dest: the destination string
 * @src: the source string
 * Return: destination string
 */
char *_strcat(char *dest, char *src)
{
	int destlen = 0;
	int sourcelen = 0;
	int i;

	for (i = 0; dest[i] != '\0'; i++)
	{
		destlen++;
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		sourcelen++;
	}
	for (i = 0; i <= sourcelen; i++)
	{
		dest[destlen + i] = src[i];
	}
	return (dest);
}
