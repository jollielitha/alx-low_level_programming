#include "main.h"
/**
 * _strlen - function that returns the length of a string
 * @s: pointer to the string
 * Return: 0
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
	i++;
	return (i);
}

