#include "main.h"
#include <stdio.h>

/**
 * str_len - Calculates the length of a string.
 * @s: A pointer
 *
 * Return: The length of the string.
 */
int str_len(char *s)
{
    if (*s == '\0')
        return 0;

    return 1 + str_len(s + 1);
}
