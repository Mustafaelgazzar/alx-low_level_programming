#include "main.h"

/**
 * print_chessboard - function that prints the chessboard.
 *
 * @a: The 2D array (8x8) representing the chessboard.
 *
 * Return: void.
 */

void print_chessboard(char (*a)[8])
{
	int itr, jtr;

	for (itr = 0; itr < 8; itr++)
	{
		for (jtr = 0; jtr < 8; jtr++)
		{
			_putchar(a[itr][jtr]);
		}
		_putchar('\0');
	}
}
