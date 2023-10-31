#include <stdlib.h>

/**
 * str_concat - Concatenate two strings.
 * @s1: The first string.
 * @s2: The second string to concatenate to the first.
 *
 * Return: Concatenated strings or NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	char *conc;
	int len1 = 0, len2 = 0;
	int a, b;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;

	conc = (char *)malloc(sizeof(char) * (len1 + len2 + 1));

	if (conc == NULL)
		return (NULL);

	for (a = 0; a < len1; a++)
		conc[a] = s1[a];

	for (b = 0; b < len2; b++, a++)
		conc[a] = s2[b];

	conc[a] = '\0';

	return (conc);
}
