#include <stdio.h>
/**
 * main -Entry point
 * Description: 'A program that prints all single digit numbers'
 * Return: 0 (Always)
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + 48);
	}
	putchar('\n');
	return (0);
}