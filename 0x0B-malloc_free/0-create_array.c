#include <stdlib.h>
/**
 * create_array - creates an array of chars
 * @c: The character used for initialization
 * @size: The size of the array
 *
 * Return: pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
    char *array_c;
    unsigned int j;

    if (size == 0) {
        return NULL;
    }

    array_c = (char *)malloc(size * sizeof(char));

    if (array_c == NULL) {
        return NULL;
    }

    for (j = 0; j < size; j++) {
        array_c[j] = c;
    }

    return array_c;
}
