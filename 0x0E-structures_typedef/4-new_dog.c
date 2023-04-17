#include "dog.h"
#include <stdlib.h>

/**
 * _strdup - duplicates a string
 *
 * @str: string to be duplicated
 *
 * Return: a pointer to the duplicated string, str or  no memory (NULL)
 *
 */
char *_strdup(char *str)
{
	char *s;
	char *p;
	int len = 0;

	if (str == NULL)
	{
	return (NULL);
	}

	while (str[len])
	len++;
	s = malloc(len + 1);
	if (s == NULL)
	{
	return (NULL);
	}

	p = s;

	while (*str)
	*p++ = *str++;
	*p = '\0';

	return (s);
}

/**
 * new_dog - creates a new dog
 *
 * @name: first parameter
 * @age: second parameter
 * @owner: third parameter
 *
 * Return: pointer to struct, if fail (NULL)
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
	{
	return (NULL);
	}

	new_dog->name = _strdup(name);

	if (new_dog->name == NULL)
	{
	free(new_dog);
	return (NULL);
	}

	new_dog->age = age;
	new_dog->owner = _strdup(owner);

	if (new_dog->owner == NULL)
	{
	free(new_dog->name);
	free(new_dog);
	return (NULL);
	}

	return (new_dog);
}
