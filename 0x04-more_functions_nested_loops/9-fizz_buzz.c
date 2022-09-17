#include "main.h"
#include <stdio.h>

/**
 * main - prints a custom number 1 to 100
 *
 * Return: void
*/
int main(void)
{
	int i = 1;

	while (i <= 100)
	{
		if (i % 3 == 0 && i != 0)
			printf(" Fizz");
		else if (i % 5 == 0 && i != 0)
			printf(" Buzz");
		else if (i % 3 == 0 && i % 5 == 0)
			printf(" FizzBuzz");
		else if (i == 0)
			printf("%d", i);
		else
			printf(" %d", i);
	}
	i++;
	printf("\n");
}
