#include "main.h"

/**
 * _isdigit - Check for digit character
 * @x: The number to be checked
 * Return: 1 for digit character else 0 
 */

int _isdigit(int x)

{

	if (x >= 48 && x <= 57)
	{
	return (1);
	}
	return (0);
}
