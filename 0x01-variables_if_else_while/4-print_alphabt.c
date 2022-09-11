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
		for (u != 'q'; u != 'e'; u++)
		putchar (u);
	}	
	putchar ('\n');
	return (0);
}
