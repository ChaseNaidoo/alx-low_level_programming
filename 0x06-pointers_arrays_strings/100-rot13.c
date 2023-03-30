#include "main.h"

/**
* rot13 - entry point
*
* @str: input characters
*
* Return: (str)
*/
char *rot13(char *str)
{
	int i, a;
	char alp[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str && str[i]; i++)
{
	a = 0;
	while (alp[a] != '\0' && alp[a] != str[i])
{
	a++;
}
	if (alp[a] == str[i])
{
	str[i] = rot[a];
}
}
	return (str);
}
