#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - the function prints each array elem on a newl
 * @array: the array
 * @size: how many elem to print
 * @action: pointer to print in regular or hex
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int s;

	if (array == NULL || action == NULL)
		return;
	for (s = 0; s < size; s++)
	{
		action(array[s]);
	}
}
