#include "main.h"

/**
  * print_chessboard - Prints a chessboard
  * @a: Array
  * Return: Always 0 (Succes)
  */
void print_chessboard(char (*a)[8])
{
	int b;

	int c;

	for (b = 0; b < 8; b++)
	{
		for (c = 0;  c < 8; c++)
			_putchar(a[b][c]);
		_putchar('\n');
	}
}