#include "main.h"
#include <stddef.h>

/**
 * *_strcpy - a function that copies the string pointed to by src
 * @dest: destination
 * @src: String
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	if (dest == NULL)
		return (NULL);
	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	return (dest);
}
