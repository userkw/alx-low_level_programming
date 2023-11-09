#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Prints a series of strings separated by a given separator
 *
 * @separator: The string used between each pair of strings
 * @n: The number of strings to be printed
 * @...: The strings to print
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
    va_list args;
    va_start(args, n);

    for (unsigned int i = 0; i < n; ++i)
    {
        const char *c_str = va_arg(args, const char *);

        if (i > 0 && separator != NULL)
        {
            printf("%s", separator);
        }

        if (c_str == NULL)
        {
            printf("(nil)");
        }
        else
        {
            printf("%s", c_str);
        }
    }

    va_end(args);
    printf("\n");
}
