#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of the program.
 *
 * @ac: number of arguments to be passed
 * @av: pointer to the char
 *
 * Return: (no return)
 *
 */
char *argstostr(int ac, char **av)
{
	int i;
	int len = 0;
	int lent = 0;
	int offset = 0;
	char *s;

	if (ac == 0 || av == NULL)
	return (NULL);

	for (i = 0; i < ac; i++)
	{
	if (av[i] == NULL)
	return (NULL);

	len = 0;

	while (*(av[i] + len) != '\0')
	len++;
	lent += len;
	}
	s = malloc(sizeof(char) * lent);

	if (s == NULL)
	return (NULL);

	for (i = 0; i < ac; i++)
	{
	len = 0;

	while (*(av[i] + len) != '\0')
	{
	*(s + offset + len) = *(av[i] + len);
	len++;
	}
	*(s + offset + len) = '\n';
	offset += len + 1;
	}
	*(s + offset) = '\0';
	return (s);
}
