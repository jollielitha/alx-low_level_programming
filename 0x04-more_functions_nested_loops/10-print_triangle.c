#include "main.h"
/**
 * print_triangle - triangle shape with a new line
 * @size: triangle size
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j;

		for (i = 1; i <= size, i++)
		{
			for (j = 1; j < size; j++)
			{
				_putchar('');
			}
			for (j = 1; j <= 1; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}