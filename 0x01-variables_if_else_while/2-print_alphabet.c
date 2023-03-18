#include <stdio.h>
/**
 * main -Entry point
 * Description: 'program that prints the alphabet in lowercase'
 * Return: 0 (Always)
 */
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
