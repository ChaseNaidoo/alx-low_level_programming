#include "lists.h"
#include <stdio.h>

/**
 * before_main - prints a message to the console before the main() function is executed.
 *
 * Return: (no return)
 *
 */
void __attribute__((constructor)) before_main(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
