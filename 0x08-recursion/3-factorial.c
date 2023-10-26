#include "main.h"
#include <stdio.h>

/**
 * factorial - Get the factorial of a number.
 * @n: Number to find the factorial of.
 * Return: The factorial value, or -1 for negative n.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}

