#include "main.h"
/**
*string_toupper - fonction toupper
*@a: pointer
*Return: pointer in return
*/
char *string_toupper(char *a)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (a[i] > 96 && a[i] < 123)
		{
			a[i] -= 32;
		}
		i++;
	}
	return (a);                                                                                                                   
}
