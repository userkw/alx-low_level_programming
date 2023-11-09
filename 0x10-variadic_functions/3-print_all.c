#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints various types of data
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
    int index = 0;
    char *output, *separator = "";

    va_list args;
    va_start(args, format);

    if (format)
    {
        while (format[index])
        {
            switch (format[index])
            {
                case 'c':
                    printf("%s%c", separator, va_arg(args, int));
                    break;
                case 'i':
                    printf("%s%d", separator, va_arg(args, int));
                    break;
                case 'f':
                    printf("%s%f", separator, va_arg(args, double));
                    break;
                case 's':
                    output = va_arg(args, char *);
                    if (!output)
                        output = "(nil)";
                    printf("%s%s", separator, output);
                    break;
                default:
                    index++;
                    continue;
            }
            separator = ", ";
            index++;
        }
    }

    printf("\n");
    va_end(args);
}
