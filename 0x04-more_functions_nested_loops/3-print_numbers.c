#include "main.h"

/**
 * print_numbers - prints the intergers 0 to 0
*/
void print_numbers(void);
{
	char i = 0;

	while (i <= 9)
	{
		_putchar('0' + i);
		i++;
	}
	_putchar('\n');
}
