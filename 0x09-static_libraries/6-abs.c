#include "main.h"

/**
 * _abs - a function that computes the absolute value of an integer
 * @n: integer whose absolute value is being computed
 * Return: always 0
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}

	return (0);
}
