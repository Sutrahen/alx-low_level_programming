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
	char a;
	char n = '0';

	while (n <= '9')
	{
		putchar(n);
		n++;
	}
	for (a = 'a'; a <= 'f'; a++)
		putchar(a);
	putchar('\n');
	return (0);
}
