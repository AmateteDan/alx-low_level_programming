#include <stdio.h>
#include "main.h"
/**
 * main - Entrypoint
 *
 * Description: prints _putchar,followedby a new line
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char sh[8] = "_putchar";
	int x;

	for (x = 0; x < 8; x++)
	{
		putchar(sh[x]);
	}
	putchar('\n');

	return (0);
}
