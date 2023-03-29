#include "main.h"

/**
 * leet - entry point
 *
 * @str: input characters
 *
 * Return: (str)
 */
char *leet(char *str)
{
	int i, a;
	char numbers[] = {'4', '3', '0', '7', '1'};
	char letters[] = {'a', 'e', 'o', 't', 'l'};
	int length = sizeof(numbers) / sizeof(letters[0]);

	for (i = 0; str[i] != '\0'; i++)
{
	for (a = 0; a < length; a++)
{
	if (str[i] == letters[a] || str[i] == letters[a] - 32)
{
	str[i] = numbers[a];
	break;
}
}
}
	return (str);
}
