#include <stdio.h>
/**
 * main - entry point of program
 * Return: 0 success
 */
int main(void)
{
	char c = 'a';

	for ( ; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}

