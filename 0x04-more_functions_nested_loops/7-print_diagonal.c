#include "main.h"

/**
 * print_diagonal - draw a diagonal line
 * @n: number of times the '\' char is printed
 * Description: Can only use _putchar to print
 */

void print_diagonal(int n)
{
	int line = 0;
	int spaces;

	if (n > 0)
	{
		while (line < n)
		{
			for (spaces = 0; spaces < line; spaces++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\\');
			line++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
