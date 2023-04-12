#include <stdlib.h>

/**
 * wcount - count the number of words in a string.
 *
 * @str: input string
 *
 * Return: (count)
 *
 */
int wcount(char *str)
{
	int count = 0;
	int in_word = 0;

	while (*str != '\0')
	{
	if (*str == ' ' || *str == '\t' || *str == '\n')
	{
	in_word = 0;
	}
	else if (in_word == 0)
	{
	count++;
	in_word = 1;
	}
	str++;
	}
	return (count);
}

/**
 * wlen - length of a word.
 *
 * @str: input string
 *
 * Return: (len)
 *
 */
int wlen(char *str)
{
	int len = 0;

	while (*str != '\0' && *str != ' ' && *str != '\t' && *str != '\n')
	{
	len++;
	str++;
	}
	return (len);
}

/**
 * strtow - length of a word.
 *
 * @str: input string
 *
 * Return: pointer to array of strings, str = NULL or fails (NULL)
 *
 */
char **strtow(char *str)
{
	int num_words, i, j, len;
	char **words;
	char *word;

	if (str == NULL || *str == '\0')
	{
	return (NULL);
	}
	num_words = wcount(str);
	words = (char **) malloc((num_words + 1) * sizeof(char *));
	if (words == NULL)
	{
	return (NULL);
	}
	for (i = 0; i < num_words; i++)
	{
	while (*str == ' ' || *str == '\t' || *str == '\n')
	{
	str++;
	}
	len = wlen(str);
	word = (char *) malloc((len + 1) * sizeof(char));
	if (word == NULL)
	{
	for (j = 0; j < i; j++)
	{
	free(words[j]);
	}
	free(words);
	return (NULL);
	}
	for (j = 0; j < len; j++)
	{
	word[j] = *str;
	str++;
	}
	word[len] = '\0';
	words[i] = word;
	}
	words[num_words] = NULL;
	return (words);
}
