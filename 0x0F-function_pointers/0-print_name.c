#include <stdio.h>

/**
 * print_name - funtion to print a name.
 * @name: name to be printed
 * @f: funtion pointer.
 * Return: Always 0.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
