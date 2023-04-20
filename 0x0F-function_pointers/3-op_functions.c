#include "3-calc.h"

/**
 * op_add - adds two integers
 *
 * @a: first input input integer
 * @b: second input input integer
 *
 * Return: sum of a and b
 *
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract two integers
 *
 * @a: first input input integer
 * @b: second input input integer
 *
 * Return: difference of a and b
 *
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply two integers
 *
 * @a: first input input integer
 * @b: second input input integer
 *
 * Return: product of a and b
 *
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide two integers
 *
 * @a: first input input integer
 * @b: second input input integer
 *
 * Return: result of division of a by b
 *
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - remainder of two integers
 *
 * @a: first input input integer
 * @b: second input input integer
 *
 * Return: remainder of division of a by b
 *
 */
int op_mod(int a, int b)
{
	return (a % b);
}
