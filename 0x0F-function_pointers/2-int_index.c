#include "function_pointers.h"

/**
 * int_index - integer search
 * @array: array search
 * @size: array size
 * @cmp: compare function
 * Return: first index for which cmp doesn't return 0, or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, j;

	if (size > 0 && array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			j = cmp(array[i]);
			if (j)
				break;
		}
		if (i < size)
			return (i);
	}
	return (-1);
}
