#include <stdio.h>
/**
 * main -  program that prints all the numbers of base 16 in lowercase
 * You can only use the putchar function
 * Return: 0
 */

int main(void)
{
	char alpha = 'a';
	int i = 0;

	while (i < 16)
	{
		if (i < 10)
		{
			putchar(i + '0');
		}
		else
		{
			putchar(alpha);
			alpha++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}

