#include "main.h"

/**
 * _islower - checks for lowercase
 * @c: c is an ascii character
 *
 * Return: 1 if c is lowercase and 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 123) /*the ASCII values of lower a and z */
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
