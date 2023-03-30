#include "main.h"

/**
 * infinite_add - Entry point
 *
 * @n1: first number
 * @n2: second number
 * @r: buffer that the function will use to store the result
 * @size_r: buffer size
 *
 * Return: result (r), result can't be stored (0)
 *
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int sum = 0, carry = 0;
	int index = 0;
	int len1 = 0, len2 = 0;
	int i, j;
	char temp;

	while (n1[len1])
{
	len1++;
}
	while (n2[len2])
{
	len2++;
}
	while (len1 > 0 || len2 > 0 || carry > 0)
{
	sum = carry;
	if (len1 > 0)
{
	sum += n1[len1--] - '0';
}
	if (len2 > 0)
{
	sum += n2[len2--] - '0';
}
	carry = sum / 10;
	r[index++] = '0' + (sum % 10);
	if (index == size_r)
{
	return (0);
}
}
	r[index] = '\0';
	for (i = 0, j = index - 1; i < j; i++, j--)
{
	temp = r[i];
	r[i] = r[j];
	r[j] = temp;
}
	return (r);
}
