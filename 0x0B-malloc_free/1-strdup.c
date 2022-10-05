#include <stdlib.h>
#include "main.h"

/**
 * _strdup - function that returns a pointer to a newly allocated space in
 * memory, which contains a copy of the string given as a parameter.
 * @str: string to be duplicated.
 * Return: NULL if str is NULL.
 *         a pointer to the duplicated string on success or NULL on failure.
 */

char *_strdup(char *str)
{
	char *p;

	int i, len = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		len++;

	p = malloc(sizeof(char) * (len + 1));


	if (p == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		p[i] = str[i];

	return (p);
}
