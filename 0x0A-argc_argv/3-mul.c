#include <stdio.h>
#include <stdlib.h>

/**
 * main - funtion of a program that multiplies two numbers.
 * @argc: size of argv[] array.
 * @argv: string array.
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int i, mult = 1;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			mult *= atoi(argv[i]);
		}
		printf("%d\n", mult);
	}
	return (0);
}
