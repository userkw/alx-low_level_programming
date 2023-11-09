#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Prints anything.
 * @format: A list of types of arguments passed to the function.
 *          c: char
 *          i: integer
 *          f: float
 *          s: char * if the string is NULL, print nil instead
 *          any other char should be ignored
 */
void print_all(const char * const format, ...)
{
	va_list arg;
	unsigned int a = 0;
	char *str;
	int num;
	double fnum;
	char *separator = "";

	va_start(arg, format);

	while (format && format[a])
	{
		switch (format[a])
		{
			case 'c':
				printf("%s%c", separator, va_arg(arg, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(arg, int));
				break;
			case 'f':
				fnum = va_arg(arg, double); 
				printf("%s%f", separator, fnum);
				break;
			case 's':
				str = va_arg(arg, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s%s", separator, str);
				break;
			default:
				a++;
				continue;
		}

		separator = ", ";
		a++;
	}

	printf("\n");
	va_end(arg);
}
