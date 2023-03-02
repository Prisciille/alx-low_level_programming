#include "main.h"
#include "2-main.c"

/**
 * _strlen - returns the length of a string
 *@s: string to evaluate
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int a;

	a = 0;

	while (s[a] != '\0')
	{
		a++;
	}

	return (a);
}
