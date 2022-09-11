#include <stdio.h>

/**
 * main - Entry point
 *
 * putchar: prints a single character
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int n = '0';

	while (n < 10)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
