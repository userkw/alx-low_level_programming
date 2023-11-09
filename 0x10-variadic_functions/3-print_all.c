#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything based on the format provided.
 * @format: A string containing the types of arguments passed to the function.
 *          c: char
 *          i: integer
 *          f: float
 *          s: char * if the string is NULL or print nil instead
 *          any other char should be ignored.
 */
void print_all(const char * const format, ...)
{
	va_list val;
	unsigned int i = 0;
	char *str;
	char sep = ',';

	va_start(val, format);

	while (format && format[i])
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(val, int));
			break;
		case 'i':
			printf("%d", va_arg(val, int));
			break;
		case 'f':
			printf("%f", va_arg(val, double));
			break;
		case 's':
			str = va_arg(val, char *);
			if (str == NULL)
				str = "(nil)";
			printf("%s", str);
			break;
		default:
			sep = '\0';
			break;
		}

		if (format[i + 1] && sep != '\0')
			printf("%c ", sep);

		i++;
	}

	printf("\n");

	va_end(val);
}
