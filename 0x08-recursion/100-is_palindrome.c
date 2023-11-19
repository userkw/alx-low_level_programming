#include "main.h"
#include <stdio.h>

/**
 * last_index - Returns the last index of a string.
 * @s: Pointer to the string.
 * Return: The last index of the string, or -1 if the string is empty.
 */

int last_index(char *s)
{
	int ix;

	if (*s == '\0')
		return (-1);
	ix = last_index(s + 1);
	return (ix == -1 ? 0 : ix + 1);
}

/**
 * check_palindrome - Recursive function
 * to check if a string is a palindrome
 * @s: string
 * @start: The starting index
 * @end: The ending index
 * Return: 1 , 0 otherwise
 */

int check_palindrome(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	else if (s[start] != s[end])
		return (0);
	else
		return (check_palindrome(s, start + 1, end - 1));
}

/**
 * is_palindrome - Checks
 * @s: string
 * Return: 1 if the str is a palindrome 0 otherwise
 */

int is_palindrome(char *s)
{
	int ed = last_index(s);

	if (ed == -1)
		return (1);
	return (check_palindrome(s, 0, ed));
}
