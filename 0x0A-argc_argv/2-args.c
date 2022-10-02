#include <stdio.h>

/**
 * main - prints the number of arguments passed into the program
 * @argc: int
 * @argv: list
 * Return: 0
*/
int main(int argc, char const *argv[])
{
	int i;

	if (argc > 0)
	{
		for (i = 0; i < argc; i++)
			printf("%s\n", argv[i]);
	}
	return (0);
}
