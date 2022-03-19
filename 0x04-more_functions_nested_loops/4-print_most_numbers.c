#include "main.h"

/**
 * print_most_numbers - prints the numbers, from 0 to 9, followed by a new line
 * Return: nothing
 */

void print_most_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++) /* 48 to 57 is the ASCII number range for 0 to 9 */
	{
		if (i != 50 && i != 52)
		{
			_putchar(i);
		}
	}
	_putchar(10); /* this is another form of coding a new line */
}
