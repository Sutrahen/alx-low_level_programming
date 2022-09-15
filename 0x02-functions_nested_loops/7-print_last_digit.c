#include "main.h"

/**
 * print_last_digit - Entry point
 *
 * @n: the integer accepted by the function
 *
 * Description: outputs the value of the last digit of a a number
 *
 * Return: int
*/
int print_last_digit(int n)
{
	int l = n % 10;

	if (n < 0)
		l = l * -1;
	_putchar(l + '0');
	return (l);
}
