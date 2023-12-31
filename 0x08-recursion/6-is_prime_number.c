#include "main.h"

/**
 * is_divisible - Check for divisibility
 * @n: Number to check
 * @divisor: Current divisor
 * Return: 1 if divisible, 0 otherwise
 */

int is_divisible(int n, int divisor)
{
	if (n % divisor == 0)
		return (1);
	else if (divisor * divisor > n)
		return (0);
	else
		return (is_divisible(n, divisor + 1));
}

/**
 * is_prime_number - Check for prime numbers
 * @n: Number to evaluate
 * Return: 1 if prime, 0 otherwise
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (!is_divisible(n, 2));
}
