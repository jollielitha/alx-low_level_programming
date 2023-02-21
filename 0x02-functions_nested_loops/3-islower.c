#include "main.h"
/**
 * _islower - check lowercase character
 * Return: 1 if lowercase, 0 if not
 * c: Character to be checked
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
