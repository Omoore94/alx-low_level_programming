#include <stdio.h>

/**
 * main - program that prints the alphabet in lowercase, and then in uppercase,
 * You can only use the putchar
 * Return: 0
 */
int main(void)
{
	char a = 'A';
	char A = 'A';
	int n = 0;

	while (n < 52)
	{
		if (n < 26)
		{
			putchar(A);
			A++;
		}
		n++;
	}
	putchar('\n');
	return (0);
}
