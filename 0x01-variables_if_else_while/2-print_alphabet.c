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
	char s;

	s = 'a';
	while (s <= 'z')
		putchar(s);
		s++;
	return (0);
}
