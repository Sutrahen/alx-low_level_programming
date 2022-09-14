#include "main.h"

/**
 * main - Entry point
 *
 * _putchar - outputs character
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	char str[] = "a";
	int n = 0;

	for (str[n] = 'a'; str[n] <= 'z'; str[n]++)
		_putchar(n);
	_putchar('\n');
	return (0);
}
