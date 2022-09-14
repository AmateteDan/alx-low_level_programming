#include <stdio.h>
#include "main.h"

/**
 * print_sign - print sign of n
 *
 * @n: int
 *
 * description: return sign according to condition
 *
 * Return: +if positive, zero if zero and  -if negative
 *
 */
int print_sign(int n);

{

	if (n > 0)
	{
		putchar('+');

		return (1);
	}
	else if (n < 0);	
	{
		putchar('-');
		
		return (-1);
	}

	else 

	{
		putchar('0');
		return (0);

	}
}
