#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - Concatenates two strings
 * @s1: The first string
 * @s2: The second string
 * @n: number of bytes
 * Return: Return pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int l1 = 0, l2 = 0, a = 0, b = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[l1])
		l1++;
	while (s2[l2])
		l2++;

	if (n >= l2)
		n = l2;

	concat = malloc(l1 + n + 1);

	if (concat == NULL)
		return (NULL);

	for (a = 0; a < l1; a++)
		concat[a] = s1[a];
	for (b = 0; b < n; b++)
		concat[a + b] = s2[b];

	concat[a + b] = '\0';

	return (concat);
}
