#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * putchar: prints a single character
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int n = 0;

	while (n < 10)
	{
		putchar(48 + n);
		if (n != 9)
		{
			putchar(',');
			putchar(' ');
		}
		n++;
	}
	putchar('\n');
	return (0);
}
