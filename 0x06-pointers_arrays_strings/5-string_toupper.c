#include "main.h"

/**
 * string_toupper - Change all lowercase letters to uppercase
 * @c: int pointer string variable
 * Return: c
 */

char *string_toupper(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] > 96 && c[i] < 123) /* 97 is ASCII of a, 122 is ASCII of z */
		{
			c[i] -= 32;
		}
	}
	return (c); /* return the string */
}
