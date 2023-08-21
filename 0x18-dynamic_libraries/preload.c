#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>

/**
 * rand - override rand function
 *
 * Return: the overidden number
 *
 */
int rand(void)
{
	return (9);
}
