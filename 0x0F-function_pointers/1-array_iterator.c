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
	if (array == NULL || action == NULL)
		return;

	for (size_t i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
