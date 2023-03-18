#include <stdio.h>
/**
 * main -Entry point
 * Description: 'A program that prints the alphabet in reverse'
 * Return: 0 (Always)
 */
int main(void)
{
	int n = 122;

	while (n >= 97)
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}
