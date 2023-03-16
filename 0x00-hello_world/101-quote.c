# include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 1 (Success)
 */
int main(void)
{
const char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
for (int i = 0; message[i] != '\0'; i++);
{
fprintf(stderr, "%c", message[i]);
}
return (1);
}
