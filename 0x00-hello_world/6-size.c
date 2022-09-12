#include <stdio.h>

/**
 * main-Entrypoint
 *
 * Return: Always 0 (success)
 *
 */
int main(void)
{
	char acharacter;
	int ainteger;
	long along;
	float afloat;
	long long alonglong;

	printf("size of a char: %u byte(s)\n", (unsigned int)sizeof(acharacter));
	printf("size of an int: %u byte(s)\n", (unsigned int)sizeof(ainteger));
	printf("size of a long int: %1u byte(s)\n", (unsigned long)sizeof(along));
	printf("size of a long long int: %u byte(s)\n", (unsigned int)sizeof(alonglong));
	printf("size of a float: %1u byte(s)\n", (unsigned long)sizeof(afloat));

	return (0);
}
