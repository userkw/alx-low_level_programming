#include "main.h"
#include <stdio.h>

/**
 * move_past_star - Moves past the wildcard
 * character '*'
 * @s2: string
 * Return: Pointer
 */

char *move_past_star(char *s2)
{
	if (*s2 == '*')
		return (move_past_star(s2 + 1));
	else
		return (s2);
}

/**
 * inception - Checks if the first string the pattern
 * of string
 * @s1: string
 * @s2: The second string, can contain wildcard character '*'
 * Return: 1 if the str 0 otherwise
 */

int inception(char *s1, char *s2)
{
	int rt = 0;

	if (*s1 == 0)
		return (0);
	if (*s1 == *s2)
		rt += wildcmp(s1 + 1, s2 + 1);
	rt += inception(s1 + 1, s2);
	return (rt);
}

/**
 * wildcmp - Compares two strings
 * with wildcard support
 * @s1: The first str
 * @s2: The second str
 * Return: 1 if the str 0 otherwise.
 */

int wildcmp(char *s1, char *s2)
{
	int rt = 0;

	if (!*s1 && *s2 == '*' && !*move_past_star(s2))
		return (1);
	if (*s1 == *s2)
	{
		if (!*s1)
			return (1);
		return (wildcmp(s1 + 1, *s2 == '*' ? s2 : s2 + 1));
	}
	if (!*s1 || !s2)
		return (0);
	if (*s2 == '*')
	{
		s2 = move_past_star(s2);
		if (!*s2)
			return (1);
		if (*s1 == *s2)
			rt += wildcmp(s1 + 1, s2 + 1);
		rt += inception(s1, s2);
		return (!!rt);
	}
	return (0);
}
