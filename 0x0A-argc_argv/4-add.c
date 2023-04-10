#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - entry point
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 (success, zero), 1 (Error)
 *
 */
int main(int argc, char *argv[])
{
	int i;
	int result = 0;
	char *ptr;
	long j;

	if (argc < 2)
	{
	printf("0\n");
	return (0);
	}

	for (i = 1; i < argc; i++)
	{

	j = strtol(argv[i], &ptr, 10);

	if (*ptr != '\0' || isspace(*argv[i]) || j < 0)
	{
		printf("Error\n");
		return (1);
	}
	result += j;
	}
	printf("%d\n", result);
	return (0);
}
