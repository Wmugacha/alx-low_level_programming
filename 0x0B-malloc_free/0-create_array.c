#include <stdlib.h>
#include "main.h"

/**
 * create_array - function that creates an array of chars,
 *                and initializes it with a specific char.
 * @size: size of the array.
 * @c: specific char that array will be initialized with.
 * Return: NULL if size if 0
 *         A pointer to the array on failure.
 */

char *create_array(unsigned int size, char c)
{
	char *ar;

	unsigned int i;

	ar = malloc(size * sizeof(char));

	for (i = 0; i < size; i++)
		ar[i] = c;

	if (size == 0)
		return (NULL);

	return (ar);

}


