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
        char l = 'a';
	char u = 'A';

        for (l = 'a'; l <= 'z'; l++)
		putchar (l);
	for (u = 'A'; u <= 'Z'; u++)
                putchar (u);
        putchar ('\n');
        return (0);
}
