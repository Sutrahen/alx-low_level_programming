#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * putchar: writes a character
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	char u = 'a';

	while (u <= 'z')
	{
		if (u != 'q' && u != 'e')
		putchar (u);
		u++;
	}	
	putchar ('\n');
	return (0);
}
