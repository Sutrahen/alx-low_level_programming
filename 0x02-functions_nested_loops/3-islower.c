#include "main.h"

/**
 * _lower - Entry point
 *
 * Description: Checks if a character is lower case
 *
 * _putchar: Outputs a single character it receives
 *
 * Return: 1 if true. 0 if false.
*/
int _islower(int c)
{
	int n = 'a';

	for (n = 'a'; n <= 'z'; n++)
	{
		if (c == n)
		return (1);
	}
	return (0);
}
