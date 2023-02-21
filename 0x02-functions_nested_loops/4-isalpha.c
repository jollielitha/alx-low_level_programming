#include "main.h"

/**
 * _isalpha - checks if it is in alphabet
 * @c: character to be checked
 * Return: 1 if c is a letter, else 0
 */

int _isapha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
