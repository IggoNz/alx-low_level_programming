#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main -Entry point
 * Description: 'A program for 2 digits combination'
 * Return: 0 (Always)
 */
int main(void)
{
	int m;
	int n;

	for (m = 0; m <= 98;  m++)
	{
		for (n = m + 1; n < 99; n++)
		{
			putchar((m / 10) + '0');
			putchar((m % 10) + '0');
			putchar(' ');
			putchar((n / 10) + '0');
			putchar((n % 10) + '0');
		}
		if (m == 99 && n == 98)
		{
			continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
