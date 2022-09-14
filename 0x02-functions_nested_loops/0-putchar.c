#include "main.h"

/**
 * main - Entry point
 *
 * printf - outputs a character
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	char c[10] = "_putchar";
	int n = 0;
	while (n < 9);
	{
		_putchar(c[n]);
		n++;
	}
	_putchar('\n');
	return (0);
}
