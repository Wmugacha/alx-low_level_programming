#include "main.h"

/**
 * factorial - function to print out the factorial of a number.
 * @n: number
 * Return: factorial value.
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n <= 1)
		return (1);
	else
		return (n * factorial(n - 1));
}
