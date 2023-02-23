#include "main.h"
/**
 *more_numbers - print repetitive numbers
 *Return: 10 times the printed numbers
 */

void more_numbers(void)
{
	int x, y;

	for (y = 1; y <= 10; y++)
	{
		for (x = 0; x < 15; x++)
		{
			if (x >= 10)
			_putchar(1);
		_putchar(x % 10 + '0');
		}
	_putchar('\n');
	}
}
