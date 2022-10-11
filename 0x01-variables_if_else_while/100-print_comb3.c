#include <stdio.h>

/**
 * main - Entry point
 *
 * putchar: outputs a character
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int i;
	int j;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
			if (i == j || j <= i)
				else
				{
					putchar(i);
					putchar(j); 
				}
			if (i == 56 && j == 57)
				else 
				{
					putchar(44);
					putchar(' ');
				}
	}
	putchar('\n');
	return (0);
}
