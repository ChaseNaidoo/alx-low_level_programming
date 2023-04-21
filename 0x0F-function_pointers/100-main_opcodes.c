#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Return 0 (success)
 *
 */
int main(int argc, char *argv[])
{
	int i, n;
	unsigned char *ptr;

	if (argc != 2)
	{
	printf("Error\n");
	return (1);
	}

	n = atoi(argv[1]);

	if (n < 0)
	{
	printf("Error\n");
	return (2);
	}

	ptr = (unsigned char *)main;

	for (i = 0; i < n; i++)
	{
	printf("%02x", *(ptr + i));
	}
	printf("\n");
	return (0);
}
