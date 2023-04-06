#include "main.h"

/**
 * getpalindrome - checks if string is a palindrome or not.
 *
 * @start: range to check palindrome
 * @end: range to check palindrome
 *
 * Return: is a palindrome (1), if not (0)
 *
 */
int getpalindrome(char *start, char *end)
{
	if (start >= end)
{
	return (1);
}
	else if (*start != *end)
{
	return (0);
}
	else
{
	return (getpalindrome(start + 1, end - 1));
}
}

/**
 * getlength - calculates length of a string to be checked
 *
 * @str: input string
 * @len: length of string
 *
 * Return: length of string
 *
 */
int getlength(char *str, int len)
{
	if (*str == '\0')
{
	return (len);
}
	else
{
	return (getlength(str + 1, len + 1));
}
}

/**
 * is_palindrome - checks if a string is a palindrome or not.
 *
 * @s: input string to be checked for palindrome
 *
 * Return: if string is palindrome (1), if not (0)
 *
 */
int is_palindrome(char *s)
{
	int len = getlength(s, 0);
	char *end = s + len - 1;

	return (getpalindrome(s, end));
}
