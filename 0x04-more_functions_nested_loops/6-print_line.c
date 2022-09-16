#include "main.h"

/**
 * print_line - funtions that prints a line.
 * @n: character being tested
 * Return: always 0.
 */

void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
