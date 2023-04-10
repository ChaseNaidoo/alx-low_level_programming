#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 (success), 1 (Error)
 *
 */
int main(int argc, char *argv[])
{
	int i;
	int result;

	if (argc != 3)
	{
	printf("Error\n");
	return (1);
	}

	result = atoi(argv[1]);

	for (i = 2; i < argc; i++)
	{
	result *= atoi(argv[i]);
	printf("%d\n", result);
	}
	return (0);
}
