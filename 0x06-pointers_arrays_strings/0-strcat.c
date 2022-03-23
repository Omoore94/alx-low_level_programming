#include "main.h"

/**
 * _strcat- function that concatenates two strings.
 *
 * @dest: pointer to destination char
 * @src: pointer to source char
 * Return: char
 */

char *_strcat(char *dest, char *src)
{
	int x, y;

	x = 0;
	while (dest[x] != '\0')
		x++;
	y = 0;
	while (src[y] != '\0')
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	dest[x] = '\0';
	return (dest);
}
