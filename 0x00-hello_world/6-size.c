#include <stdio.h>
/**
 * main - this is the main
 *
 * Return: 0 to success
 */

int main(void)
{
	printf("Size of a char: %lu byte(s)", sizeof(char));
	printf("Size of an int: %lu byte(s)", sizeof(int));
	printf("Size of a long int: %lu byte(s)", sizeof(long int));
	printf("Size of a long long int: %lu byte(S)", sizeof(long long int));
	printf("Size of a float: %lu byte(S)", sizeof(float));
	return (0);
}
