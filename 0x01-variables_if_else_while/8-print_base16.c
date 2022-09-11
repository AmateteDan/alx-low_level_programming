#include <stdio.h>
/**
 * main - Prints number from 0 to 9 and letters a to f
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
	for (x = 97; x < 103; x++)
	{
		putchar(x);
	}
	putchar('\n');

	return (0);
}
