#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always (0) Success
 */

int main(void)
{
	char ch;

	printf("Alphabets from a - z are: \n");
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		printf("%c\n", ch);
	}

	return (0);
}