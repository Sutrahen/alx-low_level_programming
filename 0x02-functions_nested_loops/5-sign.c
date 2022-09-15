#include "main.h"

/**
 * print_sign - Entry point
 *
 * @n: the integer it receives
 *
 * Description: prints the sign of a number
 *
 * Return: 1 if true. -1 if false. 0 if zero.
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	_putchar('0');
	return (0);
}
