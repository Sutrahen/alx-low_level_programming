#include "main.h"

/**
 * main - Entry point
 *
 * _putchar - outputs character
 *
 * Return: Always 0 (Success)
*/
void print_alphabet(void)
{
	char str[] = "a";
	int n = 0;
	

	while (str[n] <= 'z')
	{
		_putchar(n);
		n++;
	}
	_putchar('\n');
}
