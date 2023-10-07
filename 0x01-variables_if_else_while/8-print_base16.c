#include <stdio.h>

/**
 * main - entry point
 *
 * Description:prints all the numbers of base 16 in lowercase
 *
 * Return: Always (0) (success)
 */

int main(void)
{
	int x;
	char y;

	for (x = '0'; x <= '9'; x++)
		putchar(x + '0');
	for (y = 'a'; y <= 'f'; y++)
		putchar(y);
	putchar('\n');
	return (0);
}
