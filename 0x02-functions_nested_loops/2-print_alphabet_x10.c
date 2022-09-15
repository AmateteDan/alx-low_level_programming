#include <stdio.h>
#include "main.h"

/**
 * main -print_alphabet_x10
 *
 * declaration - print out alphabets 10 times
 *
 * Return:void
 */

int main(void)
{
	int alphabets;
	int b;

	for (b = 1; b <= 10; b++)
	{

		for (alphabets = 'a'; alphabets <= 'z'; alphabets++)

		{

			putchar(alphabets);

		}

		putchar('\n');

	}
}
