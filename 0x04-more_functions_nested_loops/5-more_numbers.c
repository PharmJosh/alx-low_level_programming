#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14.
 *
 * Return: nothing on success
 */
void more_numbers(void)
{
	int start = 0, end = 14, i;

	for (i = 1; i <= 10; i++)
	{
		while (start <= end)
		{
			putchar(start > 9 ? (start / 10) + '0' : start + '0');
			if (start > 9)
				putchar((start % 10) + '0');
			start++;
		}
		start = 0;
		putchar('\n');
	}
}
