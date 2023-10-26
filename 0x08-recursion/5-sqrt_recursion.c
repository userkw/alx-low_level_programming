#include "main.h"

/**
 * square - Find square root recursively
 * @n: Number to find the square root of
 * @val: Current value for square root check
 *
 * Return: Square root of the number if it exists, -1 otherwise
 */
int square(int n, int val)
{
	if (val * val == n)
		return (val);
	else if (val * val < n)
		return (square(n, val + 1));
	else
		return (-1);
}

/**
 * _sqrt_recursion - Compute the natural square root of a number
 * @n: Number to compute the square root of
 *
 * Return: Natural square root of the number, or -1 if not found
 */
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}
