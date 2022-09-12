#include <stdio.h>

/**
 * main - Entry point
 *
 * printf: prints a desired output
 *
 * sizeof: outputs the size of a variable
 *
 * Return: Always 0 (Success)
*/
int main (void)
{
	printf("Size of an char: %ld\n", sizeof(char));
	printf("Size of a int: %ld\n", sizeof(int));
	printf("Size of a long int: %ld\n", sizeof(long int));
	printf("Size of a long long int: %ld\n", sizeof(long long int));
	printf("Size of a float: %ld\n", sizeof(float));
	return (0);
}
