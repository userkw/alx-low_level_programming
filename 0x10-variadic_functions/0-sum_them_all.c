#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: amount of the argts
 *
 * Return: sum of its parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list val;
	unsigned int a, s = 0;

	va_start(val, n);

	for (a = 0; a < n; a++)
		s += va_arg(val, int);

	va_end(val);

	return (s);
}
