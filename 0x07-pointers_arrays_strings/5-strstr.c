#include "main.h"

/**
 * _strstr - unction finds the first occurrence of the substring 
 * needle in the string haystack. The terminating 
 * null bytes (\0) are not compared
 * @haystack: string to be searched
 * @needle: substring to be found
 * Return: pointer to substring or NULL If not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *result = haystack, *fneedle = needle;

	while (*haystack)
	{
		while (*needle)
		{
			if (*haystack++ != *needle++)
			{
				break;
			}
		}
		if (!*needle)
		{
			return (result);
		}
		needle = fneedle;
		result++;
		haystack = result;
	}
	return (0);
}
