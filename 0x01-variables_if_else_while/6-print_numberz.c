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

	for (n = '0'; n < 10; n++)
		putchar(n);
	putchar('\n');
	return (0);
}
