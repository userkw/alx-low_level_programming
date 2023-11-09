#include "variadic_functions.h"

#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints nbrs
 * @separator: string to be printed between nbrs
 * @n: nbr of integers passed to the function
 *
 * Return: nothiing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list val;
	unsigned int j;

	va_start(val, n);

	for (j = 0; j < n; j++)
	{
		printf("%d", va_arg(val, int));

		if (separator && i < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(val);
}
