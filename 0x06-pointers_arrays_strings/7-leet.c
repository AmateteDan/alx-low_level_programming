#include <stdio.h>
#include "main.h"

/**
 * leet - encodes a string to 1337
 * @s: pointer to string
 *
 * Return: pointer to s
 */
char *leet(char *s)
{
	int stringCount, leetCount;
	char letters[] = "aAeEoOtTlL";
	char num[] = "4433007711";

	/* scan through string */
	stringCount = 0;
	while (s[stringCount] != '\0')
	/* check whether letter is found */
{
	leetCount = 0;
	while (leetCount < 10)
	{
		if (letters[leetCount] == s[stringCount])
		{
			s[stringCount] = num[leetCount];
		}
		leetCount++;
	}
	stringCount++;
}
return (s);
}

