#include "main.h"

/**
 * print_diagonal - funtions that prints a diagonal line.
 * @n: character being tested
 * Return: always 0.
 */

void print_diagonal(int n)
{
	int i, j;

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j < i; j++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
	if (n < 1)
		_putchar('\n');
}
