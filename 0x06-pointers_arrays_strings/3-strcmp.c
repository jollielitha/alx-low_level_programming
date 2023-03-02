#include "main.h"

/**
 * _strcmp - function to join together two strings
 * @s1: string one
 * @s2: string two
 * Return: int value
 */

int _strcmp(char *s1, char *s2)
{
    int i = *s1;
    int j = *s2;
    int larger;
    if (i < j)
    {
        larger = j;
    }
    else if (i > j)
    {
        larger = j;
    }
    else
    {
        larger = i;
    }
    for (i = 0; i < larger; i++)
    {
        if (s1[i] == s2[i])
        {
            return 0;
        }
        else {
            return (s1[i] - s2[i]);
        }
    }
}
