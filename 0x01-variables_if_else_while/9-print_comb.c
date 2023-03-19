#include <stdio.h>
/**
 * main -Entry point
 * Description: 'a program for combinations of single-digit numbers'
 * Return: 0 (Always)
 */
int main(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
