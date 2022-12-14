#include <stdio.h>
#include "main.h"

/**
 * _strncat - function that concatenates two strings.it will
 * use n bytes from src
 * @src: src does not need to be null terminated.
 * @dest: pointer to destination string.
 * @n: number of bytes to be concatenated.
 *
 * Return: pointer to destination string.
 */

char *_strncat(char *dest, char *src, int n)
{
	int length, x;

	/* x is a counter for n bytes of src to be concatenated */
	/* length = length of destination string */

	length = 0;

	while (dest[length] != '\0')
	{
		length++;
	}

	for (x = 0; x < n && src[x] != '\0'; x++, length++)
	{
		dest[length] = src[x];
	}

	dest[length] = '\0';
	return (dest);
}
