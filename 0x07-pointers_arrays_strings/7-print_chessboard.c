#include "main.h"

/**
 * print_chessboard - function that prints the chessboard.
 *
 * @a: The 2D array (8x8) representing the chessboard.
 *
 * Return: Always 0 success.
 */

void print_chessboard(char (*a)[8])
{
	int i, n;

	for (i = 0; i < 8; i++)
	{
		for (n = 0; n < 8; n++)
		{
			_putchar(a[i][n]);
		}
		_putchar('\0');
	}
}
