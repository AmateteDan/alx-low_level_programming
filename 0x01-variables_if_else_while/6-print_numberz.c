#include <stdio.h>

/**
 * main - prnts numbers from 0 to 9
 *
 * Return: Always 0 (success)
 *
 */
int main(void)
{
	int x;

	for (x = 48; x < 58; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}