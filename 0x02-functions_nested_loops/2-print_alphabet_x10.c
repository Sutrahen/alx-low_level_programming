#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * Description: prints out the alphabets 10 times
 *
 * _putchar: prints out a single value
 *
 * Return: Always 0 (Success)
*/
void print_alphabet_x10(void)
{
	char times = 'a';
	int n = 0;

	while (n <= 9)
	{
		for (times = 'a'; times <= 'z'; times++)
		{
			_putchar(times);
		}
		_putchar('\n');
		n++;
	}
}
