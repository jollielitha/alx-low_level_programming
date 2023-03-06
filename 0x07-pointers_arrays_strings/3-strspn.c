#include "main.h"

/**
 * _strspn - gets the length of the prefix substring
 * @s: scanned string
 * @accept: string containing the characters to match
 * Return: prefix substring length
 */
unsigned int _strspn(char *s, char *accept)
{
	int counter = 0;
	int i, flag;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			flag = 0;
			if (*s == accept[i])
			{
				counter++;
				flag = 1;
				break;
			}
		}
		if (!flag)
			break;
		s++;
	}
	return (counter);
}

