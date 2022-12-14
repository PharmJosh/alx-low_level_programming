#include "main.h"

/**
 * print_sign - prints the sign of a n
 *
 * @n: number whose sign is to be printed
 *
 * Return: 1 if n > 0, 0 if n == 0 and -1 if n < 0
 */
int print_sign(int n)
{	
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('_');
		return (-1);
	}
	else
	{
		_putchar(0 + '0');
		return (0);
	}
}
