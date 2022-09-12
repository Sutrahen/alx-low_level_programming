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
	int n = 1;

	while (n < 10)
		putchar(n);
		putchar(',');
		putchar('\n');
		n++;
	
	return (0);
}
