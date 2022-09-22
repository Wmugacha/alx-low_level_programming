#include "main.h"

/**
 * _strcat - funtion to concatenate two strings.
 * @dest: first string.
 * @src: seond string.
 * Return: Always 0.
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		i++;
		j++;
	}

	return (dest);
}
