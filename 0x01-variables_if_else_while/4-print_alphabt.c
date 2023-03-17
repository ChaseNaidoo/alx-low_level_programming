#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c;
	char alp[24] = "abcdfghijklmnoprstuvwxyz";

	for (c = 0; c < 24; c++)
	putchar(alp[c]);
	putchar('\n');
	return (0);
}
