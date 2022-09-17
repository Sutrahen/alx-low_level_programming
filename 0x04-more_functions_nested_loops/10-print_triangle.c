#include "main.h"

/**
 * print_triangle - check for a digit
 *
 * @size: integer type
*/
void print_triangle(int size)
{
	int i = 1, j;

	if (size <= 0)
		_putchar ('\n');
	else
		while (i <= size && size > 0)
		{
			j = 0;
			while (j < size - i)
			{
				_putchar(' ');
				i++;
			}
			j = 0;
			while (j < i)
			{
				_putchar('#');
				j++;
			}
			_putchar('\n');
			i++;
		}
		if (i == 1)
			_putchar('\n');
}
