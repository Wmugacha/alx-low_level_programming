#include "main.h"

/**
 * _print_rev_recursion - funtion to print string in reverse.
 * @s: string to be reversed.
 * Return: Always 0.
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
	else
		_putchar('\n');
}

