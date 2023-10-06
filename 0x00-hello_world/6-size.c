#include <stdio.h>
/**
 * main - this is the main
 *
 * Return: 0 to success
 */

int main(void)
{
	printf("Size of a char: %u byte(s)\n", sizeof(char));
	printf("Size of an int: %u byte(s)\n", sizeof(int));
	printf("Size of a long int: %u byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %u byte(S)\n", sizeof(long long int));
	printf("Size of a float: %u byte(S)\n", sizeof(float));
	return (0);
}
