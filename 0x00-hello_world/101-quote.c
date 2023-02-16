#include <unistd.h>

/**
 * main - prints "and that piece of art is useful" - Dora Korpar, 2015-10-19",
 i* followed by a new line, to the standard error
 * Return: Always 1
 */

int main(void)

{
	write(STDOUT_FILENO, "and that piece of art is useful - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}


