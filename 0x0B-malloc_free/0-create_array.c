#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars
 * and initializes it with a specific char.
 * @size: size of array
 * @c: char array  with
 * Return: string of chars
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	ptr = malloc(size * sizeof(char));
	if (size == 0 || !ptr)
		return ('\0');
	for (i = 0; i < size; i++)
		ptr[i] = c;
	return (ptr);
}
