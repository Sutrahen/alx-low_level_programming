#include "main.h"

/**
 * *_strcat - appends the src string to the dest string
 * @dest: pointer destination
 * @arc: pointer source
 * Return: void
*/
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;

	while (dest[i] != '\0')
		i++;
	for (j = 0; src[j] != '0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = src[j];
	return (dest);
}
