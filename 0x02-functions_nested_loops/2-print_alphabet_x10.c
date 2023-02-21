#include "main.h"

/**
 * print_alphabet_x10 - prints lowercase alphabets 10 times
 */
void print_alphabet_x10(void)
{
	char alph;
	int i;

	i = 0;

	while (i < 10)
	{
		alph = 'a';
		while (alph <= 'z')
	{
		_putchar(alph);
		alph++;
	}
		_putchar('\n');
		i++;
	}
}

