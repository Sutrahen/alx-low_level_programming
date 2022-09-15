#include "main.h"

/**
 * _isalpha - Entry point
 *
 * @c - the integer value it receives
 *
 * Return: 1 if true. 0 if false
*/
int _isalpha(int c)
{
	int i = 'a';
	
	for (i = 'a'; i <= 'z'; i++)
	{
		if (c == i)
		return (1);
	}
	return (0);
}
