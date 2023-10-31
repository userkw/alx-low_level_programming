#include <stdlib.h>

/**
 * _strdup - Create a duplicate of a string in memory.
 * @str: The string to be duplicated.
 *
 * Return: A pointer to a new copy of the input string, or NULL
 * if str is empty or if memory allocation fails.
 */
char *_strdup(char *str)
{
    char *dupl;
    unsigned int l = 0;
    unsigned int c;

    if (str == NULL)
        return (NULL);

    while (str[l])
        l++;

    dupl = (char *)malloc(sizeof(char) * (l + 1));

    if (dupl == NULL)
        return (NULL);

    for (c = 0; c <= l; c++)
        dupl[c] = str[c];

    return (dupl);
}
