#include <stdio.h>
/**
 * main - entry point for program
 * Return: 0 success
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
	if (c == 'q' || c == 'e')
	continue;
	putchar(c);
	}
	putchar('\n');
	return (0);
}
