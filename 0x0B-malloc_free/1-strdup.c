#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @str: string.
 *
 * Return: pointer of an array of chars
 */
char *_strdup(char *str)
{
	char *ptr;
	unsigned int x, len;

	if (!str)
		return (NULL);
	for (len = 0; str[len]; len++)
		;
	ptr = (char *)malloc(len * sizeof(char) + 1);

	if (!ptr)
		return (NULL);
	for (x = 0; x <= len; x++)
		ptr[x] = str[x];
	return (ptr);

}
