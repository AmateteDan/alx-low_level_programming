#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - print the alphabet in lowercase letters, except for e and q
 *
 * Return: Always 0 (success)
 *
 */
int main(void)
{
	int x;

	for (x = 97; x <= 122; x++)
		if (x != 101 && x != 113)
	{
		putchar(x);
	}
{
putchar('\n');
}

	return (0);
}
