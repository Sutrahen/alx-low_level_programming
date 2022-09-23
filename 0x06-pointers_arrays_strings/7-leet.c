#include "main.h"

/**
 * leet - trasform to leet
 * @s: char array string type
 * Return: s transformed
*/
char *leet(char *s)
{
	int i, j;
	char *replace;

	replace = "aAeEoOtTlL4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (s[i] == replace[j])
				s[i] = replace[j + 10];
		}
	}
	return (s);
}
