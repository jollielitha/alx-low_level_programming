#include <stdio.h>
/**
 * main - entry point
 * Description:  The function printf() prints output to consule
 * return: always (0) success
 */
int main(void)
{
	printf("Size of a char: %zu byte(s)\n", sizeof (char));
	printf("Size of an int: %zu byte(s)\n", sizeof(int));
	printf("Size of a lonf int: %zu byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(long long int));
	printf("Size of a float: %zu byte(s)\n", sizeof(float));
	return (0);
}
