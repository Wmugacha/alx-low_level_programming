#include "main.h"

/**
 * print_square - function to print a square.
 * @size: this is the size of the square.
 * Return: always zero.
 */

void print_square(int size)
{
	int i, j;

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size; j++)
		{
			_putchar('#');
			if (size <= 0)
			{
				_putchar('\n');
			}
		}
		_putchar('\n');
	}
}