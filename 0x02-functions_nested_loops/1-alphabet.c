#include "main.h"
/**
 * main - main function
 *
 * Return: 0 on success.
 */
void print_alphabet(void)
{
	int start = 97, end = 122;

	while (start <= end)
	{
		_putchar(start);
		start++;
	}
	_putchar('\n');
}
