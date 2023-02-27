#include "main.h"
/**
 * puts2 - prints a string, followed by a new line
 * @str: pointer to the tring to print
 * Return: 0
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(srt[i]);
		}
		i++;
	}
	_putchar('\n');
}
