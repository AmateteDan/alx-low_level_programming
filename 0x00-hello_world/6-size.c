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

	printf("size of a char: %1u byte(s)\n", sizeof(acharacter));
	printf("size of an int: %1u byte(s)\n", sizeof(ainteger));
	printf("size of a long int: %1u byte(s)\n", sizeof(along));
	printf("size of a float: %1u byte(s)\n", sizeof(afloat));
	printf("size of a longlong int: %1u byte (s)\n", sizeof(alonglong));

	return (0);
}
