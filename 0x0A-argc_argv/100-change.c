#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int cen, coin = 0;

	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}
	cen = atoi(argv[1]);
	while (cen > 0)
	{
		if (cen >= 25)
			cen -= 25;
		else if (cen >= 10)
			cen -= 10;
		else if (cen >= 5)
			cen -= 5;
		else if (cen >= 2)
			cen -= 2;
		else if (cen >= 1)
			cen -= 1;
		coin += 1;
	}
	printf("%d\n", coin);
	return (0);
}
