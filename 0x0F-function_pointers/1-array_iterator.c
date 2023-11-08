#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - Apply a function to each elemt of an array.
 * @array: array
 * @size: the number of elemts in the array
 * @action: pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int n;

	if (array == NULL || action == NULL)
		return;

	for (n = 0; n < size; n++)
	{
		action(array[n]);
	}
}
