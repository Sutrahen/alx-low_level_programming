#include <stdio.h>

/**
 * main - Entry point
 *
 * putchar: writes a character
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	char s = 'a';

	for (s = 'a'; s <= 'z'; s++)
		putchar (s);
		putchar ('\n');
	return (0);
}
