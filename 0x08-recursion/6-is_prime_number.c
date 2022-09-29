#include "main..h"

/**
 * prime2 - Makes possible to evaluate from 1 to n
 * @a: some number as n
 * @b: number that interates from 1 to n
 * Return: on success 1
 * on error, -1 is returned, and errno is set appropriately
*/
int prime2(int a, int b)
{
	if (a == b)
		return (1);
	else if (a % b == 0)
		return (0);
	return (prime2(a, b + 1));
}
/**
 * is_prime_number - checks if a number is prime
 * @n: Number integer
 * Return: on success 1
 * on error, -1 is returned, and errno is set appropriately
*/
int is _prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime2(n, 2));
}
