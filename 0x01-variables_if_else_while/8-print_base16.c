#include <stdio.h>

/**
 * main - Prints numbers between 0 to 9 and letters between a to f.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 8; i < 18; i++)
	{
		putchar(i);
	}
	for (i = 17; i < 22; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}


