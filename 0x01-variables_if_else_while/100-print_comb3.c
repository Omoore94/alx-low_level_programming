#include <stdio.h>

/**
 * main - program that prints the numbers from 00 to 99
 * Numbers must be separated by ,followed by a space
 * Numbers should be printed in ascending order with 2 digits
 * You can only use the putchar function
 * Return: 0
 */
int main(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			putchar(i + '0');
			putchar(j + '0');
			if (((i * 10) + j) < 89)
			{
				putchar(',');
			putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
