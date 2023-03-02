#include "main.h"

/**
 * _strcmp - function that compares two strings
 * @s1: string one
 * @s2: string two
 * Return: int value
 */

int _strcmp(char *s1, char *s2)
{
	int a = 0, b = 0, c = 0, d = 0, temp;

	while (s1[a])
	{
		a++;
	}

	while (s2[b])
	{
		b++;
	}

	if (a <= b)
	{
		temp = a;
	}
	else
	{
		temp = b;
	}

	while (c <= temp)
	{
		if (s1[c] == s2[c])
		{
			c++;
			continue;
		}
		else
		{
			d = s1[c] - s2[c];
			break;
		}

		c++;
	}

	return (d);
}
