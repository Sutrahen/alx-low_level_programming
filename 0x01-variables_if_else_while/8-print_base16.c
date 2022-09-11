#include <stdio.h>

/**
 * main - Entry point
 *
 * putchar: Outputs a single character
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int n;

	while (n < 16)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
