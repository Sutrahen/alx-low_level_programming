#include "main.h"

/**
 * print_alphabet - Entry point
 *
 * Description: prints out the alphabet
 *
 * _putchar: outputs a single value
 *
 * Return: Always 0 (Success)
*/
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
