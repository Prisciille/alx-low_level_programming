#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int lower;

	for (lower = 97; lower <= 122; lower++)
	{
		putchar(lower);
	}

	int upper;

	for (upper = 65; upper <= 90; upper++)
	{
		putchar(upper);
	}
	putchar('\n');

	return (0);
}
