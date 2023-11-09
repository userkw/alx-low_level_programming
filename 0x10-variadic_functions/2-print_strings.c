#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Print strings with a specified separator.
 * @sep: The separator to be printed between strings.
 * @num_strings: The number of strings passed to the function.
 * @...: A variable number of strings to be printed.
 *
 * Description: If sep is NULL, it is not printed.
 *              If one of the strings is NULL, (nil) is printed instead.
 */
void print_strings(const char *sep, const unsigned int num_strings, ...)
{
	va_list args;
	char *current_str;
	unsigned int i;

	va_start(args, num_strings);

	for (i = 0; i < num_strings; i++)
	{
		current_str = va_arg(args, char *);

		if (current_str == NULL)
			printf("(nil)");
		else
			printf("%s", current_str);

		if (i != (num_strings - 1) && sep != NULL)
			printf("%s", sep);
	}

	printf("\n");

	va_end(args);
}
