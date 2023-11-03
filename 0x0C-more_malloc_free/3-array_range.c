#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: the minimum value
 * @max: the maximum value
 * Return: pointer or null
 */
int *array_range(int min, int max)
{
    int *pt;
    int size, i;

    if (min > max)
        return (NULL);

    size = max - min + 1;
    pt = malloc(size * sizeof(int));

    if (pt == NULL)
        return (NULL);

    for (i = 0; i < size; i++)
        pt[i] = min++;

    return (pt);
}
