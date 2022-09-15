#include "main.h"

/**
 * main - Entry point
 *
 * print_alphabet - prints out the alphabet in lower case
 *
 * _putchar - outputs character
 *
 * Return: Always 0 (Success)
*/
void print_alphabet(void)
{
	char small[] = "a";
	int n = 0;
	
	while (small[n] <= 'z')
	{
		char l = small[n];

		_putchar(l);
		l++;
	}
	_putchar('\n');
}
