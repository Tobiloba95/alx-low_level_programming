#include "main.h"

/**
 * print_number - a function that prints an integer.
 * @n: An input integer
 * Return: Nothing
 */
void print_numbers(int n)
{
	if (n == 0)
	{
		_putchar('0');
	}
	else if (n < 0)
	{
		_putchar('-');
		print_numbers(n * -1);
	}
	else
	{
		print_numbers(n);
	}
}
