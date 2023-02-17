#include <stdio.h>
/**
 * main - entry point for program
 * Return: 0 successful always
 */
int main(void)
{
	char c = 'a';
	char a = 'A';

	for (; c <= 'z'; c++)
		putchar(c);
	for (; a <= 'Z'; a++)
		putchar(a);
	putchar('\n');
	return (0);
}
