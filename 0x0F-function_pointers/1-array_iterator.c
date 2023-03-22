#include "function_pointers.h"

/**
 * array_iterator - function execution
 * @array: function array passed in
 * @size: array size
 * @action: pointer to function
 * Return: zero
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && size && action)
	{
		for (i = 0; i < size; i++)
		{
			(*action)(array[i]);
		}
	}
}
